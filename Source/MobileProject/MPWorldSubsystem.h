#pragma once

#include "Subsystems/WorldSubsystem.h"

#include "MPWorldSubsystem.generated.h"

UCLASS()
class MOBILEPROJECT_API UMPWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	static UMPWorldSubsystem* Get(const UObject* Context);
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};

