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
	}
}

void AMonster_PHZ::OnAIStateChanged(FGameplayTag& OldTag, FGameplayTag& NewTag)
{
	UGHLog::DebugMessage(DL_Info, "AI State: " + OldTag.ToString());
	UGHLog::DebugMessage(DL_Info, "AI State: " + NewTag.ToString());
}


void AMonster_PHZ::OnCharacterHurt(int32 SponsorId, int32 TargetId)
{
}
