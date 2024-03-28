// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FoliageSpawner.generated.h"

/**
 * 
 */
UCLASS()
class CRESCENDO_API UFoliageSpawner : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, category = "Spawn Foliage Custom")
	static FString text(FString Name);

};
