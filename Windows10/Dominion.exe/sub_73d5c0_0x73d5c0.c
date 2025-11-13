// 函数: sub_73d5c0
// 地址: 0x73d5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_147df48
int32_t* eax = ecx[1]

if (eax != 0x19)
    if (eax == 0x18)
        return sub_73def0(0x42c80000, 0x42c80000)
    
    if (eax == 2)
        char** eax_3 = sub_6da310(ecx)
        data_147df70 = eax_3[0x1a]
        int32_t* ecx_4 = eax_3[1]
        
        if (ecx_4[1] != 2)
            sub_63b870(eax_3, &data_801800, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                "C:\x\ax2017\Engine\AssetUtils.cpp", 0x313, "StructureDefGet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        eax = *sub_5af880(ecx_4)
        
        if (eax != 0 && eax[0x18] s> 0)
            data_147df74 = 0
            return sub_6def90(eax, eax_3[1], eax_3, 0)
        
        data_147df74 = 0xffffffff
else
    int128_t xmm0_1 = data_800248
    int32_t var_3c_1 = 0x43480000
    int32_t var_38_1 = 0x43480000
    int128_t var_30 = 0x3f800000.o
    int32_t var_34_1 = 0
    int128_t var_20_1 = xmm0_1
    eax = sub_6b80f0(ecx, &var_30)
    
    if (eax[0x1d].b != 0)
        *(eax + 0x76) = 1
        int128_t xmm0_4 = data_800248
        int32_t* ecx_1 = data_147df48
        var_3c_1.q = 0
        int32_t var_34_2 = 0
        var_30 = 0x3f800000.o
        int128_t var_20_2 = xmm0_4
        sub_6b80f0(ecx_1, &var_30)
        int32_t eax_1
        int80_t st0
        st0, eax_1 = sub_73de00(data_147df48)
        return eax_1

return eax
