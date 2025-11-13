// 函数: sub_6e1520
// 地址: 0x6e1520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result_1 = arg1
arg1.b = data_147aba1
char const* const var_10
int32_t var_c
char const* const var_8
void* result
char* ecx

if (arg1.b != 0)
    var_8 = "DrawModeSet"
    var_c = 0xd
    var_10 = "C:\x\ax2017\Engine\DrawMode.cpp"
label_6e15e3:
    ecx = "!gDraw3DData.submittingRenderItems"
label_6e15ed:
    sub_63b870(result, &data_801800, ecx, var_10, var_c, var_8)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

result = data_147d2e0

if (result == result_1)
    return result

if (result == 0)
    goto label_6e159f

void* eax_1 = result - 1

if (result != 1)
    result = eax_1 - 1
    
    if (eax_1 == 1)
        goto label_6e159f
    
    var_8 = "DrawModeSet"
    var_c = 0x1f
    var_10 = "C:\x\ax2017\Engine\DrawMode.cpp"
    ecx = "Halt"
    goto label_6e15ed

result = data_147abe4

if (*(result + 0x1d) == 0)
    var_8 = "SpriteDrawEnd"
    var_c = 0x2fb
    var_10 = "C:\x\ax2017\Engine\Sprite.cpp"
    ecx = "gpSpriteAppData->spritesDrawing"
    goto label_6e15ed

*(result + 0x1d) = 0
sub_681c50()
arg1.b = data_147aba1
label_6e159f:
result = result_1

if (result_1 == 0)
    data_147d2e0 = result_1
    return result

void* eax_3 = result - 1

if (result == 1)
    result = sub_682290()
    data_147d2e0 = result_1
    return result

result = eax_3 - 1

if (eax_3 != 1)
    var_8 = "DrawModeSet"
    var_c = 0x30
    var_10 = "C:\x\ax2017\Engine\DrawMode.cpp"
    ecx = "Halt"
    goto label_6e15ed

if (arg1.b == 0)
    data_147d2e0 = result_1
    return result

var_8 = "Draw3DBegin"
var_c = 0xb29
var_10 = "C:\x\ax2017\Engine\Draw3d.cpp"
goto label_6e15e3
