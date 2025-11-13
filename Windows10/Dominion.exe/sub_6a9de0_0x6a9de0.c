// 函数: sub_6a9de0
// 地址: 0x6a9de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = arg1[1]
int32_t edi = arg1[2]
int32_t esi = arg2[3]

if (edi s>= arg2[2])
    edi = arg2[2]

if (edx s>= arg2[1])
    edx = arg2[1]

int32_t* var_24 = &arg2[4]
int32_t var_44_1
void* var_c_1
uint32_t eax_3
char const* const ecx
void* edx_1
char* esi_1
uint8_t* edi_1

if (esi s< 0)
    int32_t eax_2 = arg2[4] - 0xd
    
    if (eax_2 u> 8)
    label_6a9e4e:
        edx_1 = &arg1[4]
        int32_t eax_5 = arg1[4] - 0xd
        var_c_1 = edx_1
        
        if (eax_5 u> 8)
        label_6a9e8f:
            var_24 = &arg2[4]
            edi_1 = (edi - 1) * esi + *arg2
            esi_1 = arg1[3] * (edi - 1) + *arg1
            goto label_6a9e96
        
        eax_3 = zx.d(lookup_table_6aa094[eax_5])
        
        switch (eax_3)
            case 0
                char const* const var_40_2 = "ImageBufferCopyToNewFormat"
                var_44_1 = 0x1cf
                ecx = "!TextureFormatIsCompressed(pSourceSpec->format)"
                goto label_6aa05e
            case 1
                goto label_6a9e8f
    else
        eax_3 = zx.d(lookup_table_6aa080[eax_2])
        
        switch (eax_3)
            case 0
                char const* const var_40_1 = "ImageBufferCopyToNewFormat"
                var_44_1 = 0x1ce
            label_6aa04f:
                ecx = "!TextureFormatIsCompressed(pDestSpec->format)"
            label_6aa05e:
                sub_63b870(eax_3, &data_801800, ecx, "C:\x\ax2017\Engine\ImageUtils.cpp", var_44_1, 
                    "ImageBufferCopyToNewFormat")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            case 1
                goto label_6a9e4e
    
    return 

esi_1 = *arg1
edx_1 = &arg1[4]
edi_1 = *arg2
var_c_1 = edx_1
label_6a9e96:
int32_t eax_8 = *edx_1
char* var_18_1 = esi_1
uint8_t* var_1c_1 = edi_1
int32_t edx_3 = *var_24
void* var_24_1
void* eax_9

if (eax_8 == edx_3)
    eax_9 = var_c_1
    var_24_1 = eax_9
label_6a9f0f:
    int32_t i_1 = sub_6a9600(edi, *eax_9)
    uint32_t count = sub_6a9570(edx, *var_24_1)
    uint32_t count_1 = count
    
    if (arg1[3] == count && arg2[3] == count)
        return memcpy(*arg2, *arg1, count * i_1)
    
    int32_t edx_8 = neg.d(count)
    
    if (arg1[3] == edx_8 && arg2[3] == edx_8)
        return memcpy(*arg2, *arg1, count * i_1)
    
    if (i_1 s<= 0)
        return arg1
    
    int32_t i
    
    do
        memcpy(edi_1, esi_1, count)
        edi_1 = &edi_1[arg2[3]]
        count = count_1
        esi_1 = &esi_1[arg1[3]]
        i = i_1
        i_1 -= 1
    while (i != 1)
    return arg1

bool cond:2_1

if (eax_8 == 0xa)
    cond:2_1 = edx_3 == 0xb
else if (eax_8 != 0xb)
    if (eax_8 != 1)
        if (eax_8 != 4 || edx_3 != 1)
            goto label_6a9ebc
        
        goto label_6a9ef9
    
    cond:2_1 = edx_3 == 4
else
    cond:2_1 = edx_3 == 0xa

if (cond:2_1)
label_6a9ef9:
    var_24_1 = &arg1[4]
    eax_9 = var_c_1
    goto label_6a9f0f

label_6a9ebc:
int32_t ecx_1 = *var_c_1

if (ecx_1 - 0xd u<= 8)
    eax_3 = zx.d(lookup_table_6aa094[7 + ecx_1])
    
    switch (eax_3)
        case 0
            char const* const var_40_5 = "ImageBufferCopyToNewFormat"
            var_44_1 = 0x209
            ecx = "!TextureFormatIsCompressed(pSourceSpec->format)"
            goto label_6aa05e
        case 1
            goto label_6a9f9b
    
    return 

label_6a9f9b:
int32_t eax_19 = arg2[4] - 0xd

if (eax_19 u> 8)
label_6a9fb1:
    int32_t eax_20 = sub_6a9450(ecx_1)
    int32_t* eax_15 = sub_6a9450(arg2[4])
    int32_t edx_9 = 0
    int32_t* var_2c_1 = eax_15
    int32_t var_24_2 = 0
    
    if (edi s> 0)
        int32_t* ecx_6 = arg1
        eax_15 = arg2
        
        do
            char* ebx_1 = esi_1
            uint8_t* var_c_2 = edi_1
            
            if (edx s> 0)
                uint8_t* esi_4 = edi_1
                int32_t edi_4 = 0
                
                do
                    uint32_t eax_22 = sub_6a97a0(ebx_1, arg1[4])
                    sub_6a9bc0(arg2, arg2[4], esi_4, eax_22)
                    esi_4 += var_2c_1
                    edi_4 += 1
                    ebx_1 = &ebx_1[eax_20]
                while (edi_4 s< edx)
                
                esi_1 = var_18_1
                edi_1 = var_1c_1
                eax_15 = arg2
                ecx_6 = arg1
                edx_9 = var_24_2
            
            esi_1 = &esi_1[ecx_6[3]]
            edx_9 += 1
            edi_1 = &edi_1[eax_15[3]]
            var_18_1 = esi_1
            var_1c_1 = edi_1
            var_24_2 = edx_9
        while (edx_9 s< edi)
    
    return eax_15

eax_3 = zx.d(lookup_table_6aa0bc[eax_19])

switch (eax_3)
    case 0
        char const* const var_40_7 = "ImageBufferCopyToNewFormat"
        var_44_1 = 0x20a
        goto label_6aa04f
    case 1
        goto label_6a9fb1
