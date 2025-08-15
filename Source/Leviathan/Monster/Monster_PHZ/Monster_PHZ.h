// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Leviathan/GHGameFrameWork/GHBaseMonster.h"
#include "Leviathan/GHManagers/GHCoreDelegatesMgr.h"
#include "Monster_PHZ.generated.h"

/**
 * 
 */
UCLASS()
class LEVIATHAN_API AMonster_PHZ : public AGHBaseMonster
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnAIStateChanged(FGameplayTag& OldTag, FGameplayTag& NewTag);
	
	UFUNCTION()
	void OnCharacterHurt(int32 SponsorId, int32 TargetId);

	
};
