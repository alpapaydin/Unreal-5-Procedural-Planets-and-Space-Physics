// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ShapeComponent.h"
#include "WaterPostProcess.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Rendering, Common), meta = (BlueprintSpawnableComponent, DisplayName = "Water Post Process"))
class CRESCENDO_API UWaterPostProcess : public UShapeComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UWaterPostProcess();

    // Called when the game starts
    virtual void BeginPlay() override;

    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Function to set the radius of the sphere
    UFUNCTION(BlueprintCallable, Category = "Water Post Process")
        void SetSphereRadius(float Radius);

private:
    // Private variables to hold the sphere's radius
    float SphereRadius;
};