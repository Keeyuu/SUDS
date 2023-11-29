#pragma once

#include "CoreMinimal.h"
#include "SUDSScriptImage.generated.h"


UENUM(BlueprintType)
enum class EDialogSpace : uint8
{
	None = 0 UMETA(DisplayName = "未初始化"),
	Left UMETA(DisplayName = "左侧"),
	Right UMETA(DisplayName = "右侧"),
	Middle UMETA(DisplayName = "中间"),
};


USTRUCT(BlueprintType)
struct FDialogImageDefaultRow
{
	GENERATED_USTRUCT_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayName="图片"))
	FSlateBrush Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayName="图片位置"))
	EDialogSpace Space = EDialogSpace::None;
};


USTRUCT(BlueprintType)
struct FDialogImageRow : public FDialogImageDefaultRow
{
	GENERATED_USTRUCT_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayName="播放图片出场动画"))
	bool bPlayMontage = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayName="使用默认图片和位置"))
	bool bUseDefault = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (DisplayName="隐藏其他,只显示这个"))
	bool bOccupy = false;
};
