// Fill out your copyright notice in the Description page of Project Settings.

#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UTextFileManager::SaveArrayText(FString SavedDirectory, FString Filename, TArray<FString> SaveText, bool AllowOverWriting = false)
{
	SavedDirectory += "\\";
	SavedDirectory += Filename;

	if (!AllowOverWriting) {
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SavedDirectory)) {
			return false;
		}
	}

	FString finalString = "";
	for (FString& Each : SaveText) 
	{
		finalString += Each;
		finalString += LINE_TERMINATOR;

	}

	return FFileHelper::SaveStringToFile(finalString, *SavedDirectory);



}


