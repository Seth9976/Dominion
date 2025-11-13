// 函数: sub_632520
// 地址: 0x632520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg2
int32_t* var_c = esi
int32_t edx = esi[1]
int32_t result = *esi
int32_t i_2 = edx - result
int32_t var_48_1
char const* const var_44_1
char* ecx

if (i_2 s<= 0)
    var_44_1 = "UpdatePlayerArrows"
    var_48_1 = 0x10dfd
    ecx = "numPlayerIcons > 0"
label_6327fd:
    sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_48_1, 
        var_44_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

int32_t ebx_1 = 0

if (result s< edx)
    int32_t* edx_2 = arg3 + 0x1004 + (result << 2)
    int32_t i
    
    do
        void* eax = *edx_2
        int32_t ecx_1 = ebx_1 + 1
        edx_2 = &edx_2[1]
        
        if (*(eax + 0x2c) == 7)
            ecx_1 = ebx_1
        
        ebx_1 = ecx_1
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t ecx_5 = data_b604e0
int32_t eax_1 = ecx_5

if (ecx_5 == 0xffffffff)
    eax_1 = 0

if (arg4 == eax_1)
    float xmm0_1 = 14f
    float xmm1_1 = 1f
    int32_t eax_2
    
    if (data_8db5c4 == 0x27)
        eax_2 = data_8db5c8
    label_6325c3:
        
        if (eax_2 != 0)
            int32_t eax_3 = sub_4bb9f0(0x1a98c88, eax_2, "tbl_player_pods")
            int32_t eax_4 = sub_4bbb30(0x1a98cac, eax_2, "tbl_player_pods", nullptr)
            xmm0_1 = *(sub_64e7a0(eax_3) + 0x16cc)
            esi = var_c
            xmm1_1 = *(sub_64e7a0(eax_4) + 0x16cc)
    else if (data_8db5d4 == 0x27)
        eax_2 = data_8db5d8
        goto label_6325c3
    result = int.d(xmm0_1 / xmm1_1)
else
    float var_20
    float var_14
    
    if (data_b604e4 != arg4)
        if (ecx_5 == 0xffffffff)
            ecx_5 = 0
        
        void* eax_7 = sub_4b95e0()
        void* edx_5 = arg4 - ecx_5
        void* ecx_6 = edx_5 + eax_7
        
        if (arg4 - ecx_5 s>= 0)
            ecx_6 = edx_5
        
        sub_631c10(eax_7, &var_20, ecx_6, &var_14)
        result = int.d(var_20 / var_14)
    else
        sub_631980(&var_20, &var_14)
        result = int.d(var_20 / var_14)
        
        if (result s< 0xe)
            result = 0xe

int32_t edi_3 = *esi
int32_t ecx_7 = esi[1]
int32_t result_1 = result

if (result s< ebx_1)
    uint32_t edx_7 = arg4
    uint32_t ebx_2 = 0
    uint32_t eax_8 = result - 1
    int32_t var_30 = 0
    uint32_t var_2c_1 = edx_7
    
    if (result - 1 s>= 0)
        ebx_2 = eax_8
    
    if (edi_3 s>= ecx_7)
    label_632726:
        uint32_t eax_9 = sub_6323b0(eax_8, ebx_2, &var_30, 0)
        sub_5cd0a0(eax_9, arg4, eax_9, ebx_2)
        ecx_7 = esi[1]
    else
        int32_t* ebx_5 = arg3 + 0x1004 + (edi_3 << 2)
        
        while (true)
            void* esi_2 = *ebx_5
            eax_8 = 0xffffffff
            
            if (*(esi_2 + 0x370) == 1)
                eax_8 = *(esi_2 + 0x384)
            
            if (*(esi_2 + 0x2c) == 7 && *(esi_2 + 0x224) == 0 && *(esi_2 + 0x228) == edx_7
                    && *(esi_2 + 0x220) == 0)
                if (eax_8 == ebx_2)
                    esi = var_c
                    break
                
                sub_5cd3e0(esi_2)
                eax_8 = sub_5cb5a0(esi_2)
                edx_7 = arg4
            
            esi = var_c
            edi_3 += 1
            ebx_5 = &ebx_5[1]
            ecx_7 = esi[1]
            
            if (edi_3 s>= ecx_7)
                goto label_632726
    
    result = result_1
else if (edi_3 s< ecx_7)
    void** ebx_8 = arg3 + 0x1004 + (edi_3 << 2)
    
    do
        void* esi_6 = *ebx_8
        
        if (*(esi_6 + 0x2c) == 7 && *(esi_6 + 0x220) == 0)
            if (*(esi_6 + 0x370) != 1)
                var_44_1 = "ClearPlayerArrows"
                var_48_1 = 0x10dc5
                ecx = "gfx.move.locCurrent.type == LOC_USER"
                goto label_6327fd
            
            sub_5cd3e0(esi_6)
            result = sub_5cb5a0(esi_6)
            *ebx_8 = nullptr
        
        esi = var_c
        edi_3 += 1
        ebx_8 = &ebx_8[1]
        ecx_7 = esi[1]
    while (edi_3 s< ecx_7)
    
    result = result_1

int32_t i_1 = *esi

if (i_1 s< ecx_7)
    void** esi_5 = arg3 + 0x1004 + (i_1 << 2)
    
    do
        void* ecx_12 = *esi_5
        
        if (ecx_12 != 0 && *(ecx_12 + 0x370) == 1 && *(ecx_12 + 0x2c) != 7)
            result.b = *(ecx_12 + 0x384) s>= result
            *(ecx_12 + 0x1b9c) = result.b
        
        result = result_1
        i_1 += 1
        esi_5 = &esi_5[1]
    while (i_1 s< var_c[1])

return result
