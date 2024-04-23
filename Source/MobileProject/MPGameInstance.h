#pragma once

#include "Kismet/BlueprintPlatformLibrary.h"

#include "MPGameInstance.generated.h"

UCLASS()
class MOBILEPROJECT_API UMPGameInstance : public UPlatformGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init() override;

	virtual void Shutdown() override;
};
