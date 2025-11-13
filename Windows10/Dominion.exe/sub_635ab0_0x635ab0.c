// 函数: sub_635ab0
// 地址: 0x635ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_bf17c0
char* const esi = &data_801800
int32_t var_c = 1
void* ecx = &data_801800

if (eax != 0)
    ecx = eax

int32_t var_18 = data_bf17c8
int32_t edi = data_bf17c4
int32_t var_14 = data_bf17cc
int32_t var_10 = data_bf17d0
int32_t var_1c = edi

if (sub_72ea50(&var_1c, ecx) == 0)
    void* var_2c_1 = ecx
    sub_63b5f0("PNGExportTexture: Failed to write %s")
    
    if (edi != 0)
        _aligned_free(edi)
    
    void* eax_5 = data_bf17c0
    void* ecx_2 = &data_801800
    
    if (eax_5 != 0)
        ecx_2 = eax_5
    
    void* var_2c_3 = ecx_2
    sub_63b5f0("PNGExportTexture failed to png write %s")

char* eax_6 = data_bf17c0

if (eax_6 != 0)
    esi = eax_6

char* const var_2c_4 = esi
sub_63b5f0("TwitterWriteFile %s")
int32_t eax_7 = data_bf17c4

if (eax_7 != 0)
    _aligned_free(eax_7)

LeaveCriticalSection(&data_bf17a8)
return 0
