#include "MPWorldSubsystem.h"

#include "Engine.h"
#include "Engine/World.h"
#include "MPLog.h"

UMPWorldSubsystem* UMPWorldSubsystem::Get(const UObject* Context)
{
	if(const auto world = GEngine->GetWorldFromContextObject(Context, EGetWorldErrorMode::ReturnNull))
	{
		return world->GetSubsystem<UMPWorldSubsystem>();
	}
	return nullptr;
}

void UMPWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UMPWorldSubsystem::Deinitialize()
{
	Super::Deinitialize();
}
