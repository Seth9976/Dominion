// 函数: sub_675a90
// 地址: 0x675a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_c28c58 == 0 || data_c27c18 == 0)
    return 

void* eax_1 = sub_665600(data_c27c58)
int32_t var_2c_1 = data_1724a80
int32_t* eax_2 = sub_64cc90(eax_1)
void* eax = sub_6dd1e0(eax_2, eax_2, &data_8cae70, var_2c_1, 0x69)

if (eax == 0)
    return 

int32_t edi_1 = *(eax + 8)
int32_t var_8_1 = edi_1

if (edi_1 == 0)
    return 

int32_t var_2c_2 = data_1724a80
int32_t* eax_3 = sub_64cc90(eax_1)
int32_t* eax_4 = sub_6dd1e0(eax_3, eax_3, &data_8cae70, var_2c_2, 0x69)
int32_t esi_2

if (eax_4 == 0 || eax_4[2] == 0)
    var_8_1 = edi_1
label_675b78:
    esi_2 = 0xffffffff
else
    char const (** var_2c_3)[0xa] = &data_8cae70
    int32_t* eax_5 = sub_64cc90(eax_1)
    esi_2 = 0
    char* _Str2 = sub_6dd140(eax_5, eax_5, &data_8cae70, 0x6f)
    char* _Str2_1 = _Str2
    
    if (eax_4[2] s<= 0)
    label_675b78_1:
        esi_2 = 0xffffffff
    else
        int32_t* edi_2 = nullptr
        
        while (_stricmp(*(edi_2 + *eax_4), _Str2) != 0)
            _Str2 = _Str2_1
            esi_2 += 1
            edi_2 = &edi_2[0xc]
            
            if (esi_2 s>= eax_4[2])
                goto label_675b78_1

int32_t edx_5 = arg1 + esi_2

if (edx_5 == 0xfffffffe)
    edx_5 = var_8_1 - 1
else if (edx_5 == var_8_1)
    edx_5 = 0xffffffff

sub_66d5b0(eax_1, edx_5)
int32_t ecx_5
ecx_5.b = 0
sub_665770(ecx_5)
