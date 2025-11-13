// 函数: sub_74ad60
// 地址: 0x74ad60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 == arg2)
    return 

int32_t* ecx = data_1512450
char const* const var_1a8_1
int32_t var_1a4_1
char const* const var_1a0_1
int32_t* eax
char* ecx_1

if (ecx[1] != 0x1e)
    var_1a0_1 = "UIDefGet"
    var_1a4_1 = 0x127
    var_1a8_1 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
label_74ae59:
    sub_63b870(eax, &data_801800, ecx_1, var_1a8_1, var_1a4_1, var_1a0_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax = sub_5af880(ecx)
int32_t ecx_2 = eax[2]

if (arg1 s>= ecx_2)
    var_1a0_1 = "MoveItem"
    var_1a4_1 = 0x932
    ecx_1 = "source < layout.numElements"
label_74ae4f:
    var_1a8_1 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
    goto label_74ae59

if (arg2 s>= ecx_2)
    var_1a0_1 = "MoveItem"
    var_1a4_1 = 0x933
    ecx_1 = "dest < layout.numElements"
    goto label_74ae4f

int32_t ecx_3 = *eax
int32_t eax_2 = arg1 * 0x178 + ecx_3
void var_18c
__builtin_memcpy(&var_18c, eax_2, 0x178)
int32_t esi_2 = arg2 * 0x178
int32_t var_1a8_2
int32_t var_1a4_2
uint32_t count

if (arg1 s>= arg2)
    int32_t ecx_5 = ecx_3 + esi_2
    count = (arg1 - arg2) * 0x178
    var_1a4_2 = ecx_5
    var_1a8_2 = ecx_5 + 0x178
else
    count = (arg2 - arg1) * 0x178
    var_1a4_2 = eax_2 + 0x178
    var_1a8_2 = eax_2

memmove(var_1a8_2, var_1a4_2, count)
__builtin_memcpy(*eax + esi_2, &var_18c, 0x178)
