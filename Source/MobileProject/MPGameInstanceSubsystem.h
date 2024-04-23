#pragma once

#include "Subsystems/GameInstanceSubsystem.h"

#include "MPGameInstanceSubsystem.generated.h"

UCLASS()
class MOBILEPROJECT_API UMPGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	static UMPGameInstanceSubsystem* Get(const UObject* Context);
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};

