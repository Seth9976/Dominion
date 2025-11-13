// 函数: sub_590760
// 地址: 0x590760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg5

if (edi == 0)
    return 

if (arg4 == 1)
    if (sub_576b30(arg4, arg2, arg3, 0x12, 0, 0, 0) s<= 0 || edi s<= 0)
        goto label_590828
else if (arg4 != 0 || edi s<= 0)
label_590828:
    int32_t eax_5 = arg2 * 0x168c + arg4
    int32_t ecx_4 = arg3[eax_5 + 0x5d3d]
    int32_t eax_7 = neg.d(ecx_4)
    
    if (ecx_4 + edi s>= 0)
        eax_7 = edi
    
    arg3[eax_5 + 0x5d3d] = eax_7 + ecx_4
    
    if (eax_7 + ecx_4 s< 0)
        sub_591930()
    
    int32_t edx_3 = arg7
    int32_t ecx_5 = arg3[0x541]
    uint32_t eax_10
    eax_10.b = not.b((edx_3 u>> 1).b)
    int32_t edi_1
    
    if (ecx_5 == 3 || ecx_5 == 5 || ecx_5 == 4)
        edi_1 = arg4
    else
        edi_1 = arg4
        
        if (ecx_5 != 6)
            uint32_t eax_12
            eax_12.b = not.b((edx_3 u>> 6).b)
            void* eax_13 = eax_12 & 1
            ecx_5.b = ecx_5 == 2
            sub_61b1b0(eax_13, 0x10, ecx_5.b, arg2, 0, edi_1, eax_7, eax_13, nullptr, 0, 0, 0, 0, 0)
            edx_3 = arg7
    
    if ((eax_10 & 0xffffff01).b != 0)
        arg1 = arg3[0x541]
        
        if (arg1 != 3 && arg1 != 5 && arg1 != 4 && arg1 != 6 && arg3[0x540].b == 0)
            uint32_t ecx_6 = arg2
            
            if (arg2 == arg3[0x673])
                ecx_6 = arg3[0x674]
            
            sub_59f9b0(arg6, arg2, arg3, ecx_6, 0xa, arg6, nullptr, 0, edi_1, eax_7, arg6, edx_3)
else
    int32_t eax_1 = sub_571ee0(arg4, arg2, arg3, 0xb09)
    
    if (eax_1 == 0xffffffff)
        goto label_590828
    
    if (arg3[eax_1 * 8 + 0x54b7] == 0)
        goto label_590828
    
    int32_t eax_3 = sub_571ee0(eax_1 << 5, arg2, arg3, 0xb09)
    int32_t var_10_1 = eax_3
    
    if (eax_3 == 0xffffffff)
        sub_591930()
        eax_3 = var_10_1
    
    if (arg3[eax_3 * 8 + 0x54b7] != 1)
        sub_591930()
        eax_3 = var_10_1
    
    sub_571cb0(eax_3, eax_3, arg3, 0xffffffff, 0, 0)
    int32_t temp1_1 = edi
    edi -= 1
    
    if (temp1_1 != 1)
        goto label_590828
