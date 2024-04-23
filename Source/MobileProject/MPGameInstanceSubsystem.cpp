#include "MPGameInstanceSubsystem.h"

#include "Engine.h"
#include "Engine/World.h"
#include "MPLog.h"

UMPGameInstanceSubsystem* UMPGameInstanceSubsystem::Get(const UObject* Context)
{
	if(const auto world = GEngine->GetWorldFromContextObject(Context, EGetWorldErrorMode::ReturnNull))
	{
		return world->GetGameInstance()->GetSubsystem<UMPGameInstanceSubsystem>();
	}
	return nullptr;
}

void UMPGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UMPGameInstanceSubsystem::Deinitialize()
{
	Super::Deinitialize();
}
