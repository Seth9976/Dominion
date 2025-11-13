// 函数: sub_734f90
// 地址: 0x734f90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi_1 = arg2 - 1 + arg3[2]
uint32_t ebx = 0x40000000
uint32_t var_14 = 0x40000000
int16_t* i_6 = arg3[6]
int32_t* i_1 = edi_1 - mods.dp.d(sx.q(edi_1), arg3[2])
int16_t* i_3 = i_6
int16_t* i_8 = i_6
void* var_2c = &arg3[6]
void* esi = &arg3[6]
uint32_t var_c = 0x40000000
void* var_8 = nullptr
int32_t i = *arg3
uint32_t ecx_1 = zx.d(*i_8)
int16_t* i_9 = i_8
void* eax_6 = &arg3[4]
uint32_t var_28 = ecx_1
uint32_t var_34
uint32_t var_30
uint32_t j_1
int32_t* ebx_1

if (ecx_1 + i_1 s> i)
    ebx_1 = arg3
    j_1 = 0
else
    int32_t eax_7 = *eax_6
    uint32_t eax_13
    
    do
        var_30 = ebx
        int32_t* var_48_1 = &var_34
        uint32_t eax_8 = zx.d(ecx_1.w)
        uint32_t eax_9 = sub_734eb0(eax_8, i_8, ecx_1, eax_8, i_1)
        
        if (eax_7 == 0)
            if (eax_9 s< ebx)
                ebx = eax_9
            
            if (eax_9 s>= var_30)
                esi = var_8
            
            var_8 = esi
        else if (arg5 + eax_9 s<= arg3[1])
            uint32_t eax_12 = var_34
            
            if (eax_9 s< ebx)
            label_735045:
                ebx = eax_9
                var_14 = eax_12
                var_8 = esi
            else if (eax_9 == ebx && eax_12 s< var_14)
                goto label_735045
        
        esi = &i_9[2]
        i_8 = *esi
        i_9 = i_8
        eax_13 = zx.d(*i_8)
        ecx_1 = eax_13
    while (eax_13 + i_1 s<= i)
    var_c = ebx
    
    if (var_8 == 0)
        eax_6 = &arg3[4]
        ebx_1 = arg3
        j_1 = 0
    else
        ebx_1 = arg3
        j_1 = zx.d(**var_8)
        eax_6 = &ebx_1[4]

if (*eax_6 == 1)
    int16_t* i_2 = i_3
    int16_t* i_4 = i_2
    int16_t* i_5 = i_4
    
    if (var_28 s< i_1)
        do
            i_2 = *(i_2 + 4)
        while (zx.d(*i_2) s< i_1)
        
        i_3 = i_2
    
    if (i_2 != 0)
        int16_t* i_7 = *(i_4 + 4)
        void* edi_2 = &i_4[2]
        var_34 = ebx_1[1]
        uint32_t eax_20 = zx.d(*i_7)
        
        do
            void* j = zx.d(*i_2) - i_1
            
            if (eax_20 s<= j)
                do
                    i_4 = i_7
                    var_2c = edi_2
                    i_7 = *(i_4 + 4)
                    i_5 = i_4
                    edi_2 = &i_4[2]
                while (zx.d(*i_7) s<= j)
            
            uint32_t* var_48_2 = &var_30
            uint32_t eax_23 = sub_734eb0(&var_30, i_4, i_4, j, i_1)
            
            if (arg5 + eax_23 s< var_34 && eax_23 s<= var_c)
                uint32_t ecx_5 = var_30
                
                if (eax_23 s< var_c || ecx_5 s< var_14)
                label_735116:
                    var_c = eax_23
                    j_1 = j
                    var_14 = ecx_5
                    var_8 = var_2c
                else if (ecx_5 == var_14 && j s< j_1)
                    goto label_735116
            
            eax_20 = zx.d(*i_7)
            i_4 = i_5
            i_2 = *(i_3 + 4)
            i_3 = i_2
        while (i_2 != 0)

arg4[2] = var_8
*arg4 = j_1
arg4[1] = var_c
return arg4
