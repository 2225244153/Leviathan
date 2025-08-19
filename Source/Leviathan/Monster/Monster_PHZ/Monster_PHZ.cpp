// Fill out your copyright notice in the Description page of Project Settings.


#include "Leviathan/Monster/Monster_PHZ/Monster_PHZ.h"

#include "Leviathan/GHManagers/GHCoreDelegatesMgr.h"
#include "Leviathan/Log/GHLog.h"


void AMonster_PHZ::BeginPlay()
{
	Super::BeginPlay();
	if (UGHCoreDelegatesMgr* CoreDelegatesMgr = GetGameInstance()->GetSubsystem<UGHCoreDelegatesMgr>(GetGameInstance()))
	{
		CoreDelegatesMgr->OnAIStateChanged.AddDynamic(this,&AMonster_PHZ::OnAIStateChanged);
		CoreDelegatesMgr->OnCharacterHurt.AddDynamic(this,&AMonster_PHZ::OnCharacterHurt);
		CoreDelegatesMgr->OnCharacterDeath.AddDynamic(this,&AMonster_PHZ::OnCharacterDeath);
	}
}

void AMonster_PHZ::OnAIStateChanged(FGameplayTag& OldTag, FGameplayTag& NewTag)
{
	
}


void AMonster_PHZ::OnCharacterHurt(int32 SponsorId, int32 TargetId)
{
}

void AMonster_PHZ::OnCharacterDeath(int32 SponsorId, int32 TargetId)
{
}

