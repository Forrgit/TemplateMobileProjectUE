#include "MPGameplayStatics.h"

#include "Engine.h"
#include "MPGameInstance.h"
#include "MPLog.h"

UMPGameInstance* UMPGameplayStatics::GetMPGameInstance(const UObject* Context)
{
	if(const auto world = GEngine->GetWorldFromContextObject(Context, EGetWorldErrorMode::ReturnNull))
	{
		return Cast<UMPGameInstance>(world->GetGameInstance());
	}
	return nullptr;
}
