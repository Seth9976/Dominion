// 函数: sub_72a0d0
// 地址: 0x72a0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ecx = *(arg1 + 0xa8)
char* eax = *(arg1 + 0xac)
void* ebx = arg1 + 0x20
char* edx = eax
void* var_c = ebx

if (ecx u< eax)
    ecx = &ecx[1]
    var_c = ebx
    *(arg1 + 0xa8) = ecx
else if (*ebx != 0)
    int32_t eax_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
    
    if (eax_2 != 0)
        edx = arg1 + 0x28 + eax_2
        *(arg1 + 0xac) = edx
    else
        edx = arg1 + 0x29
        *(arg1 + 0x20) = eax_2
        *(arg1 + 0xac) = edx
        *(arg1 + 0x28) = eax_2.b
    
    ecx = arg1 + 0x29
    eax = edx
    ebx = arg1 + 0x20
    var_c = ebx
    *(arg1 + 0xa8) = ecx

int32_t result
char var_6
char var_5

if (ecx u>= edx)
    if (*ebx != 0)
        void* eax_4 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        *(arg1 + 0xa8) = arg1 + 0x28
        
        if (eax_4 != 0)
            eax = eax_4 + 0x28 + arg1
            *(arg1 + 0xac) = eax
        else
            *var_c = 0
            eax = arg1 + 0x29
            *(arg1 + 0xac) = eax
            *(arg1 + 0x28) = 0
        
        var_5 = *(arg1 + 0x28)
        ecx = arg1 + 0x29
        goto label_72a196
    
    edx.b = 0
    var_5 = 0
    var_6 = 0
label_72a1b6:
    
    if (ecx u< eax)
        edx.b = *ecx
        ecx = &ecx[1]
    else if (*ebx == 0)
        edx.b = 0
    else
        void* eax_8
        eax_8, edx = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        *(arg1 + 0xa8) = arg1 + 0x28
        
        if (eax_8 != 0)
            ecx = arg1 + 0x29
            eax = eax_8 + 0x28 + arg1
            *(arg1 + 0xac) = eax
            edx.b = *(arg1 + 0x28)
        else
            ecx = arg1 + 0x29
            *var_c = 0
            eax = arg1 + 0x29
            *(arg1 + 0xac) = eax
            *(arg1 + 0x28) = 0
            edx.b = *(arg1 + 0x28)
    
    void* var_10_1
    void* eax_21
    
    if (var_6 != 1)
        if (edx.b == 2 || edx.b == 3 || edx.b == 0xa || edx.b == 0xb)
            var_10_1 = arg1 + 0x10
            int32_t edx_7
            
            if (*(arg1 + 0x10) != 0)
                edx_7 = eax - ecx
            
            if (*(arg1 + 0x10) == 0 || edx_7 s>= 9)
                eax_21 = &ecx[9]
                var_10_1 = arg1 + 0x10
            label_72a33e:
                *(arg1 + 0xa8) = eax_21
                goto label_72a342
            
            *(arg1 + 0xa8) = eax
            (*(arg1 + 0x14))(*(arg1 + 0x1c), 9 - edx_7)
        label_72a342:
            
            if (sub_7203e0(arg1) s< 1)
                result = 0
            else if (sub_7203e0(arg1) s< 1)
                result = 0
            else
                void* eax_24 = *(arg1 + 0xa8)
                
                if (eax_24 u< *(arg1 + 0xac))
                    eax_24.b = *eax_24
                else if (*var_c == 0)
                    eax_24.b = 0
                else
                    void* eax_27 = (*var_10_1)(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                    *(arg1 + 0xa8) = arg1 + 0x28
                    
                    if (eax_27 != 0)
                        *(arg1 + 0xac) = eax_27 + 0x28 + arg1
                        eax_24.b = *(arg1 + 0x28)
                    else
                        *var_c = 0
                        *(arg1 + 0xac) = arg1 + 0x29
                        *(arg1 + 0x28) = 0
                        eax_24.b = *(arg1 + 0x28)
                
                if (var_5 != 1)
                    if (eax_24.b == 8 || eax_24.b == 0xf || eax_24.b == 0x10 || eax_24.b == 0x18
                            || eax_24.b == 0x20)
                        result = 1
                    else
                        result = 0
                else if (eax_24.b == 8 || (eax_24.b == 0x10 && (eax_24.b == 8 || eax_24.b == 0xf
                        || eax_24.b == 0x10 || eax_24.b == 0x18 || eax_24.b == 0x20)))
                    result = 1
                else
                    result = 0
        else
            result = 0
    else if (edx.b == 1 || edx.b == 9)
        void* ebx_5 = arg1 + 0x10
        var_10_1 = ebx_5
        void* edx_3
        
        if (*(arg1 + 0x10) != 0)
            edx_3 = eax - ecx
        
        if (*(arg1 + 0x10) == 0 || edx_3 s>= 4)
            *(arg1 + 0xa8) = &ecx[4]
        else
            *(arg1 + 0xa8) = eax
            (*(arg1 + 0x14))(*(arg1 + 0x1c), 4 - edx_3)
        
        char* edx_4 = *(arg1 + 0xa8)
        void* ecx_2 = *(arg1 + 0xac)
        void* eax_13
        void* edx_5
        
        if (edx_4 u>= ecx_2)
            if (*var_c != 0)
                eax_13 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                *(arg1 + 0xa8) = arg1 + 0x28
                
                if (eax_13 != 0)
                    ecx_2 = arg1 + 0x28 + eax_13
                    *(arg1 + 0xac) = ecx_2
                else
                    ecx_2 = arg1 + 0x29
                    *(arg1 + 0xac) = ecx_2
                    *var_c = 0
                    *(arg1 + 0x28) = 0
                
                eax_13.b = *(arg1 + 0x28)
                edx_5 = arg1 + 0x29
                ebx_5 = arg1 + 0x10
                goto label_72a2b2
            
            result = 0
        else
            eax_13.b = *edx_4
            edx_5 = &edx_4[1]
        label_72a2b2:
            
            if (eax_13.b == 8 || eax_13.b == 0xf || eax_13.b == 0x10 || eax_13.b == 0x18
                    || eax_13.b == 0x20)
                void* eax_17
                
                if (*ebx_5 != 0)
                    eax_17 = ecx_2 - edx_5
                
                if (*ebx_5 == 0 || eax_17 s>= 4)
                    eax_21 = edx_5 + 4
                    goto label_72a33e
                
                *(arg1 + 0xa8) = ecx_2
                (*(arg1 + 0x14))(*(arg1 + 0x1c), 4 - eax_17)
                goto label_72a342
            
            result = 0
    else
        result = 0
else
    edx.b = *ecx
    ecx = &ecx[1]
    var_5 = edx.b
label_72a196:
    *(arg1 + 0xa8) = ecx
    edx.b = var_5
    var_6 = edx.b
    
    if (edx.b u<= 1)
        ebx = var_c
        goto label_72a1b6
    
    result = 0
*(arg1 + 0xa8) = *(arg1 + 0xb0)
*(arg1 + 0xac) = *(arg1 + 0xb4)
return result
