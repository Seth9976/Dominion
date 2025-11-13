// 函数: sub_666a40
// 地址: 0x666a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_20
char const* const var_1c
char* ecx_1
char const* const edx

if (arg3 u> 3)
    var_1c = "RectEditor"
    var_20 = 0x3841
    ecx_1 = "Halt"
label_666b5c:
    edx = &data_801800
label_666b66:
    sub_63b870(arg1, edx, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_20, var_1c)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (arg3)
    case 0
        int32_t* ecx = data_c27c20
        
        if (ecx == 0)
            var_1c = "UI2DefGet"
            var_20 = 0xc16
            edx = "UI2DefGet on null pointer"
            ecx_1 = &data_874470
            goto label_666b66
        
        if (ecx[1] != 0x22)
            var_1c = "UI2DefGet"
            var_20 = 0xc17
            ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
            goto label_666b5c
        
        void* eax = sub_5af880(ecx)
        int32_t var_10 = 0
        int32_t var_c = *(eax + 0x10)
        int32_t var_8 = *(eax + 0x14)
        *arg4 = 0.o
        return arg4
    case 1
        *arg4 = 0
        arg4[1] = 0
        arg4[2] = sub_4d5cb0(2730.5f)
        arg4[3] = 0x45000000
        return arg4
    case 2
        *arg4 = 0
        arg4[1] = 0
        arg4[2] = 0x454a6000
        arg4[3] = sub_4d5cb0(1821.5f)
        return arg4
    case 3
        *arg4 = 0
        arg4[1] = 0
        arg4[2] = 0x45184000
        arg4[3] = 0x448ca000
        return arg4
