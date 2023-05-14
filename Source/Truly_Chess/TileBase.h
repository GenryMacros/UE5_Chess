// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileBase.generated.h"

UCLASS()
class TRULY_CHESS_API ATileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATileBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void MakeSelected();
	virtual void Deselect();
	virtual void MarkAsPreMove();
	virtual void UnMarkAsPreMove();
	virtual void MakeThreat();
	virtual void MakeNonThreat();
	virtual void IsWithoutPiece();
};
