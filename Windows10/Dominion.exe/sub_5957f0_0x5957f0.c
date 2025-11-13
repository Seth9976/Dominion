// 函数: sub_5957f0
// 地址: 0x5957f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = &arg2[(arg4 - arg2) s>> 3]
int32_t eax_5 = (arg4 - 4 - arg2) s>> 2

if (eax_5 s<= 0x28)
    sub_597480(eax_5, edi, arg2, arg4 - 4, arg5)
else
    int32_t eax_7 = (eax_5 + 1) s>> 3
    int32_t ebx_1 = eax_7 << 2
    int32_t* edx = &arg2[eax_7]
    int32_t* eax_9 = &arg2[eax_7 * 2]
    sub_597480(eax_9, edx, arg2, eax_9, arg5)
    int32_t* eax_10 = &edi[eax_7]
    sub_597480(eax_10, edi, edi - ebx_1, eax_10, arg5)
    int32_t* ebx_3 = arg4 - 4 - ebx_1
    void* eax_13 = arg4 - 4 - (eax_7 << 3)
    sub_597480(sub_597480(eax_13, ebx_3, eax_13, arg4 - 4, arg5), edi, edx, ebx_3, arg5)

int32_t* edx_5 = &edi[1]
int32_t* var_8 = edx_5

if (arg2 u< edi)
    do
        int32_t eax_15 = edi[-1]
        int32_t ecx_9 = *edi
        uint32_t ebx_4 = zx.d(eax_15.w)
        int32_t var_14_2 = ecx_9
        
        if (ebx_4 u>= 0x320)
            sub_591930()
            ecx_9 = var_14_2
        
        int32_t ebx_5 = *(ebx_4 * 0x64 + arg5 + 0x1a4c)
        uint32_t eax_17 = zx.d(ecx_9.w)
        
        if (eax_17 u>= 0x320)
            sub_591930()
            ecx_9 = var_14_2
        
        int32_t temp0_1 = *(eax_17 * 0x64 + arg5 + 0x1a4c)
        
        if (ebx_5 s>= temp0_1)
            if (ebx_5 s> temp0_1)
                break
            
            if (eax_15 s< ecx_9)
                break
        
        int32_t eax_19 = *edi
        int32_t ecx_10 = edi[-1]
        uint32_t ebx_6 = zx.d(eax_19.w)
        int32_t var_14_3 = ecx_10
        
        if (ebx_6 u>= 0x320)
            sub_591930()
            ecx_10 = var_14_3
        
        int32_t ebx_7 = *(ebx_6 * 0x64 + arg5 + 0x1a4c)
        uint32_t eax_21 = zx.d(ecx_10.w)
        
        if (eax_21 u>= 0x320)
            sub_591930()
            ecx_10 = var_14_3
        
        int32_t temp2_1 = *(eax_21 * 0x64 + arg5 + 0x1a4c)
        
        if (ebx_7 s>= temp2_1)
            if (ebx_7 s> temp2_1)
                break
            
            if (eax_19 s< ecx_10)
                break
        
        edi -= 4
    while (arg2 u< edi)
    
    edx_5 = var_8

void* eax_32 = arg4

if (edx_5 u< eax_32)
    while (true)
        int32_t eax_23 = *edx_5
        int32_t ecx_11 = *edi
        uint32_t ebx_8 = zx.d(eax_23.w)
        int32_t var_14_4 = ecx_11
        
        if (ebx_8 u>= 0x320)
            sub_591930()
            ecx_11 = var_14_4
        
        int32_t ebx_9 = *(ebx_8 * 0x64 + arg5 + 0x1a4c)
        uint32_t eax_25 = zx.d(ecx_11.w)
        
        if (eax_25 u>= 0x320)
            sub_591930()
            ecx_11 = var_14_4
        
        int32_t temp1_1 = *(eax_25 * 0x64 + arg5 + 0x1a4c)
        
        if (ebx_9 s< temp1_1)
        label_5959bc:
            int32_t ecx_12 = *var_8
            int32_t eax_28 = *edi
            uint32_t ebx_10 = zx.d(eax_28.w)
            int32_t var_14_5 = ecx_12
            
            if (ebx_10 u>= 0x320)
                sub_591930()
                ecx_12 = var_14_5
            
            int32_t ebx_11 = *(ebx_10 * 0x64 + arg5 + 0x1a4c)
            uint32_t eax_30 = zx.d(ecx_12.w)
            
            if (eax_30 u>= 0x320)
                sub_591930()
                ecx_12 = var_14_5
            
            int32_t temp3_1 = *(eax_30 * 0x64 + arg5 + 0x1a4c)
            
            if (ebx_11 s< temp3_1)
            label_595a11:
                eax_32 = arg4
                edx_5 = &var_8[1]
                var_8 = edx_5
                
                if (edx_5 u>= eax_32)
                    break
                
                continue
            else if (ebx_11 s<= temp3_1 && eax_28 s>= ecx_12)
                goto label_595a11
        else if (ebx_9 s<= temp1_1 && eax_23 s>= ecx_11)
            goto label_5959bc
        
        eax_32 = arg4
        edx_5 = var_8
        break

int32_t* ebx_12 = edx_5
int32_t* edx_7 = edi
label_595a31:
int32_t* var_10_6 = edx_7

while (true)
    int32_t* var_14_6 = ebx_12
    
    while (true)
        if (ebx_12 u< eax_32)
            do
                int32_t eax_33 = *edi
                int32_t edx_8 = *ebx_12
                uint32_t eax_34 = zx.d(eax_33.w)
                int32_t var_14_7 = edx_8
                
                if (eax_34 u>= 0x320)
                    sub_591930()
                    edx_8 = var_14_7
                
                int32_t ecx_13 = *(eax_34 * 0x64 + arg5 + 0x1a4c)
                uint32_t eax_36 = zx.d(edx_8.w)
                
                if (eax_36 u>= 0x320)
                    sub_591930()
                    edx_8 = var_14_7
                
                int32_t temp4_1 = *(eax_36 * 0x64 + arg5 + 0x1a4c)
                
                if (ecx_13 s< temp4_1)
                label_595aa5:
                    int32_t eax_38 = *ebx_12
                    int32_t edx_9 = *edi
                    uint32_t eax_39 = zx.d(eax_38.w)
                    int32_t var_14_8 = edx_9
                    
                    if (eax_39 u>= 0x320)
                        sub_591930()
                        edx_9 = var_14_8
                    
                    int32_t ecx_14 = *(eax_39 * 0x64 + arg5 + 0x1a4c)
                    uint32_t eax_41 = zx.d(edx_9.w)
                    
                    if (eax_41 u>= 0x320)
                        sub_591930()
                        edx_9 = var_14_8
                    
                    int32_t temp6_1 = *(eax_41 * 0x64 + arg5 + 0x1a4c)
                    
                    if (ecx_14 s>= temp6_1)
                        if (ecx_14 s> temp6_1)
                            break
                        
                        if (eax_38 s< edx_9)
                            break
                    
                    if (var_8 != ebx_12)
                        int32_t ecx_15 = *var_8
                        *var_8 = *ebx_12
                        *ebx_12 = ecx_15
                    
                    var_8 = &var_8[1]
                else if (ecx_13 s<= temp4_1 && eax_33 s>= edx_8)
                    goto label_595aa5
                
                ebx_12 = &ebx_12[1]
            while (ebx_12 u< arg4)
            
            edx_7 = var_10_6
            var_14_6 = ebx_12
        
        bool cond:0_1 = edx_7 != arg2
        
        if (edx_7 u> arg2)
            int32_t* ebx_13 = var_10_6
            void* edx_11 = &ebx_13[-1]
            void* var_10_7 = edx_11
            int32_t* eax_59
            
            do
                int32_t eax_46 = *edi
                int32_t eax_47 = *edx_11
                uint32_t eax_48 = zx.d(eax_47.w)
                
                if (eax_48 u>= 0x320)
                    sub_591930()
                
                int32_t edx_12 = eax_46
                int32_t ecx_16 = *(eax_48 * 0x64 + arg5 + 0x1a4c)
                uint32_t eax_50 = zx.d(edx_12.w)
                
                if (eax_50 u>= 0x320)
                    sub_591930()
                    edx_12 = eax_46
                
                int32_t temp5_1 = *(eax_50 * 0x64 + arg5 + 0x1a4c)
                void* edx_14
                
                if (ecx_16 s< temp5_1 || (ecx_16 s<= temp5_1 && eax_47 s>= edx_12))
                    int32_t edx_13 = *var_10_7
                    int32_t eax_53 = *edi
                    uint32_t eax_54 = zx.d(eax_53.w)
                    int32_t var_18_10 = edx_13
                    
                    if (eax_54 u>= 0x320)
                        sub_591930()
                        edx_13 = var_18_10
                    
                    int32_t ecx_17 = *(eax_54 * 0x64 + arg5 + 0x1a4c)
                    uint32_t eax_56 = zx.d(edx_13.w)
                    
                    if (eax_56 u>= 0x320)
                        sub_591930()
                        edx_13 = var_18_10
                    
                    int32_t temp7_1 = *(eax_56 * 0x64 + arg5 + 0x1a4c)
                    
                    if (ecx_17 s>= temp7_1 && (ecx_17 s> temp7_1 || eax_53 s< edx_13))
                        eax_59 = arg2
                        break
                    
                    edx_14 = var_10_7
                    edi -= 4
                    
                    if (edi != edx_14)
                        int32_t ecx_18 = *edi
                        *edi = *edx_14
                        *edx_14 = ecx_18
                else
                    edx_14 = var_10_7
                
                eax_59 = arg2
                ebx_13 -= 4
                edx_11 = edx_14 - 4
                var_10_7 = edx_11
            while (eax_59 u< ebx_13)
            
            var_10_6 = ebx_13
            edx_7 = var_10_6
            cond:0_1 = edx_7 != eax_59
            ebx_12 = var_14_6
        
        if (not(cond:0_1))
            if (ebx_12 == arg4)
                *arg3 = edi
                arg3[1] = var_8
                return arg3
            
            if (var_8 != ebx_12)
                int32_t ecx_19 = *edi
                *edi = *var_8
                *var_8 = ecx_19
            
            int32_t ecx_20 = *edi
            *edi = *ebx_12
            edi = &edi[1]
            eax_32 = arg4
            var_8 = &var_8[1]
            edx_7 = var_10_6
            *ebx_12 = ecx_20
            ebx_12 = &ebx_12[1]
            break
        
        edx_7 = &edx_7[-1]
        var_10_6 = edx_7
        
        if (ebx_12 != arg4)
            int32_t ecx_23 = *ebx_12
            *ebx_12 = *edx_7
            ebx_12 = &ebx_12[1]
            eax_32 = arg4
            *edx_7 = ecx_23
            goto label_595a31
        
        edi -= 4
        
        if (edx_7 != edi)
            int32_t ecx_21 = *edx_7
            *edx_7 = *edi
            *edi = ecx_21
        
        int32_t ecx_22 = *edi
        void* edx_18 = var_8 - 4
        var_8 = edx_18
        *edi = *edx_18
        eax_32 = arg4
        *edx_18 = ecx_22
        edx_7 = var_10_6
