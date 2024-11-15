// Fill out your copyright notice in the Description page of Project Settings.


#include "AArmadura.h"

// Sets default values
AAArmadura::AAArmadura()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAArmadura::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAArmadura::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAArmadura::Inicializar(ADonkeyKong_SIS457Character* TargetCharacter)
{
	Character = TargetCharacter;
}

void AAArmadura::AplicarEfecto()
{
	if (Character)
	{
		// Aumenta la armadura
		Character->BaseJumpVelocity += 100.0f; // Ejemplo de aumento de habilidad
		UE_LOG(LogTemp, Warning, TEXT("Armadura aplicada. Nueva Velocidad de Salto Base: %f"), Character->BaseJumpVelocity);
	}
}

