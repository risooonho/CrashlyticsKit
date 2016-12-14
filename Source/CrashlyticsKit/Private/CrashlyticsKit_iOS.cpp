// Copyright 2016 Vladimir Alyamkin. All Rights Reserved.

#include "CrashlyticsKitPrivatePCH.h"

UCrashlyticsKit_iOS::UCrashlyticsKit_iOS(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UCrashlyticsKit_iOS::InitCrashlytics()
{
	UE_LOG(LogVftCrashlytics, Verbose, TEXT("%s: ---"), *VA_FUNC_LINE);
}

void UCrashlyticsKit_iOS::ForceCrash()
{
	UE_LOG(LogVftCrashlytics, Verbose, TEXT("%s: ---"), *VA_FUNC_LINE);
}

void UCrashlyticsKit_iOS::ForceException()
{
	UE_LOG(LogVftCrashlytics, Verbose, TEXT("%s: ---"), *VA_FUNC_LINE);
}

void UCrashlyticsKit_iOS::SetUserIdentifier(FString UserIdentifier)
{
	UE_LOG(LogVftCrashlytics, Verbose, TEXT("%s: ---"), *VA_FUNC_LINE);
}

void UCrashlyticsKit_iOS::SetUserEmail(FString UserEmail)
{
	UE_LOG(LogVftCrashlytics, Verbose, TEXT("%s: ---"), *VA_FUNC_LINE);
}

void UCrashlyticsKit_iOS::SetUserName(FString UserName)
{
	UE_LOG(LogVftCrashlytics, Verbose, TEXT("%s: ---"), *VA_FUNC_LINE);
}

void UCrashlyticsKit_iOS::WriteLog(FString Log)
{
	UE_LOG(LogVftCrashlytics, Verbose, TEXT("%s: ---"), *VA_FUNC_LINE);
}