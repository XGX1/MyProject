// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"


UCLASS(meta = (BlueprintThreadSafe, ScriptName = "HttpIBLibrary"))
class MYPROJECT_API UMyBlueprintFunctionLibrary : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "HttpIB|SendRequest")
	static void UpdateTextureSize(UTextureRenderTarget2D* TextureRenderTarget2D, const int SizeX, const int SizeY)
	{
		TextureRenderTarget2D->ResizeTarget(SizeX, SizeY);
		TextureRenderTarget2D->UpdateResource();
	}
};
