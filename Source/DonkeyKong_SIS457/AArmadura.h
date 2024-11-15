// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UDecorator.h"
#include "DonkeyKong_SIS457Character.h"
#include "GameFramework/Actor.h"
#include "AArmadura.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AAArmadura : public AActor, public IUDecorator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAArmadura();

protected:

	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	ADonkeyKong_SIS457Character* Character;

public:
	void Inicializar(ADonkeyKong_SIS457Character* TargetCharacter);

	virtual void AplicarEfecto() override;
};
