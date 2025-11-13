// 函数: sub_609d80
// 地址: 0x609d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2
int32_t edx
eax_2, edx = sub_64e7a0(arg1)
int32_t esi = data_ccf6c0
int32_t edi = 0
int32_t ecx_1 = 1
char var_99 = 0
*(eax_2 + 0x18bc) = sub_609960
int32_t var_50[0x12]
int128_t* const i

for (i = &data_77fea0; i != &data_77fee8; )
    if ((esi & ecx_1) == 0)
        edx.b = var_99
    else
        edx = *i
        
        if (edx != 0x13)
            var_50[edi] = edx
            edi += 1
            edx.b = var_99
        else
            edx.b = 1
            var_99 = 1
    
    i += 4
    ecx_1 *= 2

if (edx.b != 0)
    var_50[edi] = 0x13
    edi += 1

int32_t var_c0
char const* const var_bc
char* ecx_2

if (data_ccf6c4 == 0)
    int32_t eax_3 = 0
    char var_a4_1 = 0
    int32_t var_a0_1 = 0
    int32_t var_a8_1 = 0
    int32_t var_98[0x12]
    
    if (edi s> 0)
        int32_t edx_4
        
        do
            i = eax_3 << 2
            int32_t ecx_3 = *(&var_50 + i)
            
            if (ecx_3 == 0x13)
                var_bc = "GetRequiredDLCs"
                var_c0 = 0xa857
                goto label_60a010
            
            void* eax_4 = sub_609800(ecx_3)
            var_a0_1 += 1
            uint32_t edx_2 = zx.d(var_a4_1)
            
            if (sub_4dae80(eax_4) != 0)
                edx_2 = 1
            
            var_a4_1.d = edx_2
            edx_4 = var_a8_1 + 1
            *(&var_98 + i) = eax_4
            eax_3 = var_a0_1
            var_a8_1 = edx_4
        while (edx_4 s< edi)
        var_a0_1 = eax_3
    
    int32_t var_bc_1 = 0xffffffff
    sub_666120(eax_3, &data_be5a8c, arg1, eax_3)
    
    if (var_a4_1 != 0)
        uint32_t eax_7 = sub_64e7a0(arg1)
        sub_665db0(eax_7, &data_be5aa4, eax_7, 0x3f800000, 0xffffffff, 0)
    
    for (void* i_1 = &data_be5990; i_1 != &data_be5a44; i_1 += 0x14)
        i = *(i_1 + 0x10)
        
        if (i == 0)
            i = *(i_1 + 0xc)
        
        if (var_a0_1 s<= i)
            uint32_t eax_8 = sub_64e7a0(arg1)
            void* result = sub_665db0(eax_8, i_1, eax_8, 0x3f800000, 0xffffffff, 0)
            int32_t ebx_1 = 0
            
            if (var_a0_1 s> 0)
                do
                    int32_t* edi_2 = var_98[ebx_1]
                    int32_t esi_2 = edi_2[8]
                    uint32_t eax_9 = sub_64e7a0(arg1)
                    sub_665db0(eax_9, esi_2, eax_9, 0x3f800000, ebx_1, 0)
                    int32_t eax_10 = sub_4dae80(edi_2)
                    void** esi_3
                    int32_t edi_3
                    
                    if (eax_10 == 0)
                        esi_3 = &data_be5a98
                        edi_3 = 0xffffffff
                    else if (eax_10 != 1)
                        esi_3 = &data_be5a74
                        edi_3 = 0xffffffff
                    else
                        esi_3 = &data_be5a80
                        edi_3 = ebx_1
                    
                    uint32_t eax_11 = sub_64e7a0(arg1)
                    result = sub_665db0(eax_11, esi_3, eax_11, 0x3f800000, edi_3, 0)
                    ebx_1 += 1
                while (ebx_1 s< var_a0_1)
            
            if (data_ccf6c8 == 2)
                uint32_t eax_12 = sub_64e7a0(arg1)
                result = sub_665db0(eax_12, &data_be5ab0, eax_12, 0x3f800000, 0xffffffff, 0)
            
            CookieCheckFunction(result)
            return result
    
    var_bc = "LookupMissingLayout"
    var_c0 = 0xa845
label_60a010:
    ecx_2 = "Halt"
else
    var_bc = "GetRequiredDLCs"
    var_c0 = 0xa84d
    ecx_2 = "flags == 0"

sub_63b870(i, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_c0, var_bc)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
