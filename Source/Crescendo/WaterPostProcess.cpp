// Fill out your copyright notice in the Description page of Project Settings.


#include "WaterPostProcess.h"

// Sets default values for this component's properties
UWaterPostProcess::UWaterPostProcess()
{
    // Set default sphere radius
    SphereRadius = 100.0f;
}

// Called when the game starts
void UWaterPostProcess::BeginPlay()
{
    Super::BeginPlay();

    UpdateBounds();
}

// Called every frame
void UWaterPostProcess::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// Function to set the radius of the sphere
void UWaterPostProcess::SetSphereRadius(float Radius)
{
    SphereRadius = Radius;
    // Update the sphere's scale or radius here
    SetSphereRadius(SphereRadius);
}
