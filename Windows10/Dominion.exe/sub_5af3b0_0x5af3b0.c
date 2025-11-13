// 函数: sub_5af3b0
// 地址: 0x5af3b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int64_t* var_8 = arg3
int32_t* var_34
int64_t* var_30
int32_t var_2c
int32_t var_28
int32_t ecx_3

if (arg5 s> arg6)
    int32_t eax_17 = arg6 s>> 1
    void* edi_2 = arg3
    void* var_c_1 = edi_2
    void* ebx_1 = arg2 + eax_17 * 0xc
    ecx_3 = arg9
    int32_t i = (arg2 - arg3) s/ 0xc
    
    while (i s> 0)
        uint32_t i_3 = i u>> 1
        void* edi_3 = edi_2 + i_3 * 0xc
        int32_t eax_21 = *(edi_3 + 4)
        
        if (*(ebx_1 + 4) != 0xa)
            if (eax_21 == 0xa)
                edi_2 = var_c_1
                i = i_3
            else
            label_5af542:
                int32_t eax_33
                eax_33.b = *(ecx_3 + *ebx_1 * 0xc + 0x14) + 0f > *(ecx_3 + *edi_3 * 0xc + 0x14) + 0f
                
                if (eax_33.b == 0)
                    goto label_5af56f
                
                edi_2 = var_c_1
                i = i_3
        else if (eax_21 != 0xa)
        label_5af56f:
            edi_2 = edi_3 + 0xc
            var_c_1 = edi_2
            i += 0xffffffff - i_3
        else
            int32_t eax_22 = *(edi_3 + 8)
            
            if (*(ebx_1 + 8) s< 6)
                if (eax_22 s>= 6)
                    goto label_5af56f
                
                goto label_5af542
            
            if (eax_22 s>= 6)
                goto label_5af542
            
            edi_2 = var_c_1
            i = i_3
    
    var_28 = eax_17
    var_2c = (edi_2 - var_8) s/ 0xc
    var_30 = ebx_1
    var_34 = edi_2
else
    int64_t* edi = arg2
    int32_t eax_2 = arg5 s>> 1
    int64_t* var_c = edi
    int32_t* ebx = arg3 + eax_2 * 0xc
    ecx_3 = arg9
    int32_t i_1 = (arg4 - arg2) s/ 0xc
    
    while (i_1 s> 0)
        uint32_t i_2 = i_1 u>> 1
        uint32_t eax_5 = i_2 * 3
        int32_t* edi_1 = edi + (eax_5 << 2)
        int32_t eax_6 = ebx[1]
        
        if (*(edi + (eax_5 << 2) + 4) != 0xa)
            if (eax_6 == 0xa)
            label_5af42a:
                edi = &edi_1[3]
                var_c = edi
                i_1 += 0xffffffff - i_2
            else
            label_5af464:
                int32_t eax_16
                eax_16.b = *(ecx_3 + *edi_1 * 0xc + 0x14) + 0f > *(ecx_3 + *ebx * 0xc + 0x14) + 0f
                
                if (eax_16.b != 0)
                    goto label_5af42a
                
                edi = var_c
                i_1 = i_2
        else if (eax_6 != 0xa)
            edi = var_c
            i_1 = i_2
        else
            int32_t eax_7 = ebx[2]
            
            if (edi_1[2] s>= 6)
                if (eax_7 s>= 6)
                    goto label_5af464
                
                goto label_5af42a
            
            if (eax_7 s< 6)
                goto label_5af464
            
            edi = var_c
            i_1 = i_2
    
    var_28 = (edi - arg2) s/ 0xc
    var_2c = eax_2
    var_30 = edi
    var_34 = ebx

return sub_5af580(arg5, arg2, var_8, arg4, arg5, arg6, arg7, arg8, ecx_3, var_34, var_30, var_2c, 
    var_28)
