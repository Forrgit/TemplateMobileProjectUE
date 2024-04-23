#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "MPGameplayStatics.generated.h"

UCLASS()
class MOBILEPROJECT_API UMPGameplayStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure)
	static UMPGameInstance* GetMPGameInstance(const UObject* Context);
};

