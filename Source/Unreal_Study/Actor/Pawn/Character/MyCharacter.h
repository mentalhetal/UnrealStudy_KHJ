// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
// AbilitySystemComponent h
#include "AbilitySystemInterface.h"
#include "MyCharacter.generated.h"


UCLASS()
class UNREAL_STUDY_API AMyCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// AbilitySystemComponent return
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

};
