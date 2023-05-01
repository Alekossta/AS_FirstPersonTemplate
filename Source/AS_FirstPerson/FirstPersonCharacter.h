// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "FirstPersonCharacter.generated.h"

UCLASS()
class AS_FIRSTPERSON_API AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstPersonCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	// COMPONENTS

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;

	// VARIABLES/PROPERTIES

	UPROPERTY(EditDefaultsOnly)
	class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly)
	class UInputAction* JumpAction;

	UPROPERTY(EditDefaultsOnly)
	class UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly)
	class UInputAction* LookAction;

	// FUNCTIONS
	
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
};
