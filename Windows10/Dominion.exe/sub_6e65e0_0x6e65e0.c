// 函数: sub_6e65e0
// 地址: 0x6e65e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_128
int32_t* eax_1 = __security_cookie ^ &var_128
int32_t* var_14 = eax_1
int32_t* edi = arg3
int32_t* var_110 = edi
int32_t* ecx = *edi
char const* const var_13c
int32_t var_138
char const* const var_134
char* ecx_1

if (ecx[1] == 0x18)
    uint32_t result_1
    int32_t edx
    result_1, edx = sub_5af880(ecx)
    int128_t var_100
    float* eax_3 = sub_64b1b0(&var_100, edx, arg4, &var_100)
    int32_t edx_1 = edi[0x1e]
    int128_t var_c0 = *eax_3
    int128_t var_b0_1 = *(eax_3 + 0x10)
    int128_t var_a0_1 = *(eax_3 + 0x20)
    int128_t var_90_1 = *(eax_3 + 0x30)
    float* var_134_4
    int32_t* edx_3
    float var_70
    
    if (edx_1 == 0xffffffff)
        var_134_4 = &var_70
        edx_3 = &edi[8]
    else
        sub_6e7c30(&var_70, edx_1, edi, &var_70)
        __builtin_memcpy(&var_100, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        var_100:0xc.d = var_70 ^ (data_8937c0.o).d
        int128_t var_f0
        int32_t var_6c
        var_f0:0xc.d = var_6c ^ (data_8937c0.o).d
        float* eax_6 = sub_642ae0(&var_70, &var_100, &edi[8], &var_70)
        edx_3 = &var_100
        var_100 = *eax_6
        int128_t var_f0_1 = *(eax_6 + 0x10)
        int128_t var_e0_1 = *(eax_6 + 0x20)
        eax_3 = &var_70
        var_134_4 = &var_70
        int128_t var_d0_1 = *(eax_6 + 0x30)
    float* eax_7 = sub_642ae0(eax_3, edx_3, &var_c0, var_134_4)
    int32_t edx_4 = 0
    int32_t var_11c_1 = 0
    var_100 = *eax_7
    int128_t var_f0_2 = *(eax_7 + 0x10)
    int128_t var_e0_2 = *(eax_7 + 0x20)
    uint32_t result = result_1
    int128_t var_d0_2 = *(eax_7 + 0x30)
    
    if (*(result + 0x28) s<= 0)
    label_6e684f:
        CookieCheckFunction(result)
        return result
    
    int32_t eax_8 = 0
    int32_t var_118_1 = 0
    
    while (true)
        void* edi_2 = edi[0x1a] + eax_8
        
        if (*(edi_2 + 0x5c) == 0)
            int32_t edx_5 = sub_6e62b0(&var_100, edx_4, var_110, &var_100)
            
            if (*(edi_2 + 0x64) != 0)
                void var_80
                int32_t* eax_11 = sub_6fe1d0(&var_80, edx_5, edi_2 + 0x64, &var_80)
                int32_t eax_12 = eax_11[2]
                int64_t var_10c = *eax_11
                int32_t var_104_1 = eax_12
                eax_1 = var_10c.d
                
                if (eax_1 != 0)
                    while (true)
                        int32_t ecx_8 = *eax_1
                        
                        if (ecx_8 == 1)
                            void* eax_14 = sub_6b83a0(eax_1[1])
                            
                            if (eax_14 != 0)
                                sub_6c24d0(eax_14, arg4)
                        else
                            if (ecx_8 != 2)
                                var_134 = "AttachmentDrawOne"
                                var_138 = 0x17a
                                var_13c = "C:\x\ax2017\Engine\Attachment.cpp"
                                ecx_1 = "Halt"
                                break
                            
                            if (sub_6e5bf0(eax_1[2]) != 0)
                                sub_6e65e0(arg4)
                        
                        sub_6fe250(&var_10c)
                        eax_1 = var_10c.d
                        
                        if (eax_1 == 0)
                            goto label_6e6822
                    
                    break
        
    label_6e6822:
        result = result_1
        int32_t edi_4 = var_11c_1 + 1
        var_118_1 += 0x68
        var_11c_1 = edi_4
        
        if (edi_4 s>= *(result + 0x28))
            goto label_6e684f
        
        eax_8 = var_118_1
        edx_4 = edi_4
        edi = var_110
else
    var_134 = "FlanimGetDef"
    var_138 = 0x2ed
    var_13c = "C:\x\ax2017\Engine\AssetUtils.cpp"
    ecx_1 = "assetPtr->assetType == ASSET_TYPE_FLANIM"

sub_63b870(eax_1, &data_801800, ecx_1, var_13c, var_138, var_134)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
