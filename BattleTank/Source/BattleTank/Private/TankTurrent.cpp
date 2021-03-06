// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankTurrent.h"

void UTankTurrent::Rotate(float RelativeSpeed) {
	//need to move it from one to another
	//add rotator and each frame, move by x cm until getting to target position
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1.0f, +1.0f);
	auto RotationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	//auto Rotation = FMath::Clamp<float>( (RelativeRotation.Yaw + RotationChange), MinTurningDegrees, MaxTurningDegrees);
	SetRelativeRotation(FRotator(0, (RelativeRotation.Yaw + RotationChange), 0));
}


