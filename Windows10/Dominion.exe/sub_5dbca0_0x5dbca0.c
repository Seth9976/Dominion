// 函数: sub_5dbca0
// 地址: 0x5dbca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cf65b8
uint128_t xmm1 = zx.o(*(eax + 0x18))
int32_t xmm2_1 = _mm_cvtepi32_ps(zx.o(*(eax + 0x14)))
float var_1c = 0f
int32_t xmm1_1 = _mm_cvtepi32_ps(xmm1)
int32_t var_18 = 0
*arg3 = arg5
int32_t var_14 = xmm2_1
int32_t var_10 = xmm1_1
int128_t xmm0 = var_1c.o
var_1c = 0f
int32_t var_18_1 = 0
int32_t var_14_1 = xmm2_1
int32_t var_10_1 = xmm1_1
int128_t var_2c = xmm0
var_1c.o = var_1c.o
sub_654ce0(&var_2c, arg2, "token", data_171e874, &var_2c, &var_1c, arg5, nullptr, 0)
sub_666060(*arg2, arg4)
*(sub_64e7a0(*arg2) + 0x18bc) = sub_5db060
uint32_t eax_4 = sub_64e7a0(*arg2)
sub_665db0(eax_4, &data_be31d8, eax_4, 0x3f800000, 0xffffffff, 0)
sub_4d3b70(*arg2)

if (*arg3 == 0x2ece)
    uint32_t eax_5 = sub_64e7a0(*arg2)
    sub_665db0(eax_5, &data_be3214, eax_5, 0x3f800000, 0xffffffff, 0)

if (sub_5db430(arg3) != 0)
    uint32_t eax_7 = sub_64e7a0(*arg2)
    sub_665db0(eax_7, &data_be3184, eax_7, 0x3f800000, 0xffffffff, 0)

void* eax_8 = sub_5cb070()

if (eax_8 != 0)
    uint32_t eax_9 = sub_64e7a0(*arg2)
    sub_665db0(eax_9, eax_8, eax_9, 0x3f800000, 0xffffffff, 0)

int32_t eax_10 = arg3[0xb]
uint32_t eax_13

if (eax_10 == 4)
    int32_t eax_11 = data_b604e0
    
    if (eax_11 == 0xffffffff)
        eax_11 = 0
    
    if (arg3[0x71] != eax_11)
        eax_13 = sub_64e7a0(*arg2)
        sub_665db0(eax_13, &data_be3208, eax_13, 0x3f800000, 0xffffffff, 0)
else if (eax_10 == 6)
    int32_t eax_12 = data_b604e0
    
    if (eax_12 == 0xffffffff)
        eax_12 = 0
    
    if (arg3[0x79] != eax_12)
        eax_13 = sub_64e7a0(*arg2)
        sub_665db0(eax_13, &data_be3208, eax_13, 0x3f800000, 0xffffffff, 0)
int32_t var_44
char const* const var_40_2
int32_t eax_15

if (arg3[0xb] != 6)
    void* esi_1 = &arg3[0x6d]
    void* eax_51 = sub_571910(arg3[0x6d])
    int32_t ecx_93 = *esi_1
    uint32_t eax_52
    
    if (ecx_93 != 0xb01 || arg3[0x74].b == 0)
        int32_t eax_53
        
        if (arg3[0x686] == 0)
            eax_53 = arg3[0x6f]
        
        if (arg3[0x686] != 0 || (eax_53 != 0x3f1 && eax_53 != 6))
            eax_52 = sub_64e7a0(*arg2)
            sub_665db0(eax_52, eax_51 + 0xc, eax_52, 0x3f800000, 0xffffffff, 0)
        else if (ecx_93 != 0x600)
            int32_t eax_55 = *arg2
            uint32_t eax_56
            void* edx_9
            
            if (ecx_93 != 0x401)
                eax_56 = sub_64e7a0(eax_55)
                edx_9 = eax_51 + 0xc
            else
                eax_56 = sub_64e7a0(eax_55)
                edx_9 = &data_be2980
            
            sub_665db0(eax_56, edx_9, eax_56, 0x3f800000, 0xffffffff, 0)
            esi_1 = &arg3[0x6d]
        else
            arg3[0x76]
            uint32_t eax_54 = sub_64e7a0(*arg2)
            sub_665db0(eax_54, &data_be2974, eax_54, 0x3f800000, 0xffffffff, 0)
            int32_t var_48_1 = 0
            sub_5d8770(*arg2)
            esi_1 = &arg3[0x6d]
    else
        eax_52 = sub_64e7a0(*arg2)
        sub_665db0(eax_52, &data_be298c, eax_52, 0x3f800000, 0xffffffff, 0)
    int32_t ecx_102 = arg3[0x75]
    void* eax_58 = arg3[0x6f]
    int32_t edx_12 = ecx_102
    
    if (ecx_102 == 0)
        edx_12 = arg3[0x76]
    
    eax_15 = *esi_1
    char var_8_1 = 0
    bool cond:6_1
    
    if (eax_15 s<= 0xb00)
        if (eax_15 == 0xb00)
            goto label_5dc5e3
        
        if (eax_15 s> 0x600)
            if (eax_15 == 0x601)
                goto label_5dc64b
            
            cond:6_1 = eax_15 != 0xa00
            goto label_5dc676
        
        if (eax_15 == 0x600)
            goto label_5dc5e3
        
        int32_t eax_59 = eax_15 - 0x400
        
        if (eax_15 != 0x400)
            eax_15 = eax_59 - 1
            cond:6_1 = eax_59 != 1
            goto label_5dc676
        
        if (edx_12 s> 1)
            goto label_5dc5cc
        
        goto label_5dc5e3
    
    if (eax_15 s<= 0xc00)
        if (eax_15 == 0xc00)
        label_5dc64b:
            
            if (eax_58 == 0x3f1 || edx_12 s> 1)
                goto label_5dc5cc
            
            goto label_5dc5e3
        
        eax_15 -= 0xb01
        
        if (eax_15 u<= 9)
            lookup_table_5dc7c8[eax_15]
        label_5dc5e3:
            
            if (arg3[0x6d] == 0xa00)
                int32_t eax_62 = data_b604e0
                
                if (eax_62 == 0xffffffff)
                    eax_62 = 0
                
                if (data_b809cc != eax_62)
                    uint32_t eax_63 = sub_64e7a0(*arg2)
                    sub_665db0(eax_63, &data_be31fc, eax_63, 0x3f800000, 0xffffffff, 0)
                
                char eax_64 = sub_5dafe0()
                int32_t ecx_106 = *arg2
                uint32_t eax_65
                void** edx_13
                
                if (eax_64 == 0)
                    eax_65 = sub_64e7a0(ecx_106)
                    edx_13 = &data_be3190
                else
                    eax_65 = sub_64e7a0(ecx_106)
                    edx_13 = &data_be319c
                
                sub_665db0(eax_65, edx_13, eax_65, 0x3f800000, 0xffffffff, 0)
            
            return sub_5d8950(*arg2, arg3[0x71])
        
        var_40_2 = "ShouldShowCount"
        var_44 = 0x3687
    else if (eax_15 s> 0x1000)
        if (eax_15 == 0x1001)
            goto label_5dc5cc
        
        cond:6_1 = eax_15 != 0x1200
    label_5dc676:
        
        if (not(cond:6_1))
            goto label_5dc5cc
        
        var_40_2 = "ShouldShowCount"
        var_44 = 0x3687
    else
        if (eax_15 == 0x1000)
            goto label_5dc64b
        
        int32_t eax_61 = eax_15 - 0xe00
        
        if (eax_15 == 0xe00)
            goto label_5dc5cc
        
        eax_15 = eax_61 - 1
        
        if (eax_61 == 1)
            if (edx_12 s> 1)
                var_8_1 = 1
            label_5dc5cc:
                int32_t var_40_3 = var_8_1.d
                sub_5d8770(*arg2)
                goto label_5dc5e3
            
            if (eax_58 != 0x3f1)
                if (ecx_102 s> 0)
                    goto label_5dc5cc
                
                goto label_5dc5e3
            
            if (edx_12 == 1 || ecx_102 s<= 0)
                goto label_5dc5e3
            
            goto label_5dc5cc
        
        var_40_2 = "ShouldShowCount"
        var_44 = 0x3687
else
    eax_15 = arg3[0x78] - 1
    uint32_t eax_20
    void** edx_2
    
    switch (eax_15)
        case 0
            uint32_t eax_16 = sub_64e7a0(*arg2)
            return sub_665db0(eax_16, &data_be2998, eax_16, 0x3f800000, 0xffffffff, 0)
        case 1
            uint32_t eax_18 = sub_64e7a0(*arg2)
            return sub_665db0(eax_18, &data_be29b0, eax_18, 0x3f800000, 0xffffffff, 0)
        case 2
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be29bc
        label_5dbed1:
            void* result = sub_665db0(eax_20, edx_2, eax_20, 0x3f800000, 0xffffffff, 0)
            
            if (arg3[0x7a] s<= 1)
                return result
            
            int32_t var_40_1 = 0
            return sub_5d8770(*arg2)
        case 3
            uint32_t eax_22 = sub_64e7a0(*arg2)
            return sub_665db0(eax_22, &data_be29c8, eax_22, 0x3f800000, 0xffffffff, 0)
        case 4
            uint32_t eax_30 = sub_64e7a0(*arg2)
            return sub_665db0(eax_30, &data_be2a04, eax_30, 0x3f800000, 0xffffffff, 0)
        case 5
            uint32_t eax_32 = sub_64e7a0(*arg2)
            sub_665db0(eax_32, &data_be2a10, eax_32, 0x3f800000, 0xffffffff, 0)
            return sub_5d8950(*arg2, arg3[0x79])
        case 6
            uint32_t eax_34 = sub_64e7a0(*arg2)
            return sub_665db0(eax_34, &data_be2a1c, eax_34, 0x3f800000, 0xffffffff, 0)
        case 7
            uint32_t eax_36 = sub_64e7a0(*arg2)
            return sub_665db0(eax_36, &data_be2a28, eax_36, 0x3f800000, 0xffffffff, 0)
        case 8
            uint32_t eax_26 = sub_64e7a0(*arg2)
            return sub_665db0(eax_26, &data_be29d4, eax_26, 0x3f800000, 0xffffffff, 0)
        case 9
            uint32_t eax_28 = sub_64e7a0(*arg2)
            return sub_665db0(eax_28, &data_be29e0, eax_28, 0x3f800000, 0xffffffff, 0)
        case 0xa
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be29ec
            goto label_5dbed1
        case 0xb
            uint32_t eax_24 = sub_64e7a0(*arg2)
            return sub_665db0(eax_24, &data_be29f8, eax_24, 0x3f800000, 0xffffffff, 0)
        case 0xc
            uint32_t eax_38 = sub_64e7a0(*arg2)
            sub_665db0(eax_38, &data_be2a34, eax_38, 0x3f800000, 0xffffffff, 0)
            sub_5d8950(*arg2, arg3[0x79])
            uint32_t eax_39 = sub_64e7a0(*arg2)
            sub_665db0(eax_39, &data_be2968, eax_39, 0x3f800000, 0xffffffff, 0)
            arg3[0x7a]
            int32_t var_50_1 = 0
            return sub_5d8770(*arg2)
        case 0xd
            uint32_t eax_41 = sub_64e7a0(*arg2)
            return sub_665db0(eax_41, &data_be2a40, eax_41, 0x3f800000, 0xffffffff, 0)
        case 0xe
            uint32_t eax_43 = sub_64e7a0(*arg2)
            return sub_665db0(eax_43, &data_be2a4c, eax_43, 0x3f800000, 0xffffffff, 0)
        case 0xf
            uint32_t eax_45 = sub_64e7a0(*arg2)
            return sub_665db0(eax_45, &data_be2a58, eax_45, 0x3f800000, 0xffffffff, 0)
        case 0x11
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2a64
            goto label_5dbed1
        case 0x12
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2a70
            goto label_5dbed1
        case 0x13
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2a7c
            goto label_5dbed1
        case 0x14
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2a88
            goto label_5dbed1
        case 0x15
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2a94
            goto label_5dbed1
        case 0x16
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2aa0
            goto label_5dbed1
        case 0x17
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2aac
            goto label_5dbed1
        case 0x18
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2ab8
            goto label_5dbed1
        case 0x19
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2ac4
            goto label_5dbed1
        case 0x1a
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2ad0
            goto label_5dbed1
        case 0x1b
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2adc
            goto label_5dbed1
        case 0x1c
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2ae8
            goto label_5dbed1
        case 0x1d
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2af4
            goto label_5dbed1
        case 0x1e
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b00
            goto label_5dbed1
        case 0x1f
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b0c
            goto label_5dbed1
        case 0x20
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b18
            goto label_5dbed1
        case 0x21
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b24
            goto label_5dbed1
        case 0x22
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b30
            goto label_5dbed1
        case 0x23
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b3c
            goto label_5dbed1
        case 0x24
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b48
            goto label_5dbed1
        case 0x25
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b54
            goto label_5dbed1
        case 0x26
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b60
            goto label_5dbed1
        case 0x27
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b78
            goto label_5dbed1
        case 0x28
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b84
            goto label_5dbed1
        case 0x29
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b90
            goto label_5dbed1
        case 0x2a
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2bb4
            goto label_5dbed1
        case 0x2b
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2bc0
            goto label_5dbed1
        case 0x2c
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2bcc
            goto label_5dbed1
        case 0x2d
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2b9c
            goto label_5dbed1
        case 0x2e
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2ba8
            goto label_5dbed1
        case 0x2f
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2bd8
            goto label_5dbed1
        case 0x30
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2be4
            goto label_5dbed1
        case 0x31
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2bf0
            goto label_5dbed1
        case 0x32
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2bfc
            goto label_5dbed1
        case 0x33
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2c08
            goto label_5dbed1
        case 0x34
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2c14
            goto label_5dbed1
        case 0x35
            eax_20 = sub_64e7a0(*arg2)
            edx_2 = &data_be2c20
            goto label_5dbed1
        case 0x36
            uint32_t eax_47 = sub_64e7a0(*arg2)
            return sub_665db0(eax_47, &data_be2c2c, eax_47, 0x3f800000, 0xffffffff, 0)
        case 0x37
            uint32_t eax_49 = sub_64e7a0(*arg2)
            return sub_665db0(eax_49, &data_be2c38, eax_49, 0x3f800000, 0xffffffff, 0)
    
    var_40_2 = "DomDeclareTokenInt"
    var_44 = 0x387b

sub_63b870(eax_15, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_44, 
    var_40_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
