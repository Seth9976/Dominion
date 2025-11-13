// 函数: sub_74cbe0
// 地址: 0x74cbe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* esi = arg1
int32_t* var_118 = esi
memset(&data_1a9ac18, 0, 0x30c)
void var_114
memset(&var_114, 0, 0x104)
char* ebx = esi[2]
void* i = &var_114
char j

if (*ebx != 0)
    void var_11
    
    while (i u< &var_11)
        char* esi_1 = ebx
        
        do
            j = *esi_1
            esi_1 = &esi_1[1]
        while (j != 0)
        
        uint32_t count = esi_1 - &esi_1[1]
        memmove(i, ebx, count)
        void* edi = i + count
        ebx = &ebx[1 + count]
        *edi = 9
        i = edi + 1
        
        if (*ebx == 0)
            break
    
    esi = var_118

char* edx = esi[3]
char* ecx_1 = edx

do
    j = *ecx_1
    ecx_1 = &ecx_1[1]
while (j != 0)

char* eax_2 = &data_8901d4

if (ecx_1 != &ecx_1[1])
    eax_2 = edx

void* edx_1 = &var_114
char* var_11c = eax_2

do
    eax_2.b = *edx_1
    edx_1 += 1
while (eax_2.b != 0)

void* esi_3 = var_118[1]
char* ecx_3 = esi_3

do
    eax_2.b = *ecx_3
    ecx_3 = &ecx_3[1]
while (eax_2.b != 0)

char* ebx_3 = *var_118
void* const edi_2 = &data_8901d4

if (ecx_3 != &ecx_3[1])
    edi_2 = esi_3

char* esi_4 = ebx_3

do
    eax_2.b = *esi_4
    esi_4 = &esi_4[1]
while (eax_2.b != 0)

char* var_130_2 = var_11c
void* eax_3 = &var_114
char* ecx_6 = &data_8901d4

if (esi_4 != &esi_4[1])
    ecx_6 = ebx_3

void var_113

if (edx_1 - &var_113 == 0)
    eax_3 = &data_8901d4

void* var_134_2 = eax_3
void* const var_138_2 = edi_2
char* var_13c = ecx_6
sub_74afa0(&data_1a9ac18, 0x30c, "Title: %s\r\nPath: %s\r\nFilter: %s\r\nDefault Extension: %3s")
CookieCheckFunction(&data_1a9ac18)
return &data_1a9ac18
