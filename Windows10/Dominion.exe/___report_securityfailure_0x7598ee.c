// 函数: ___report_securityfailure
// 地址: 0x7598ee
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

BOOL eax
int32_t ecx
int32_t edx
eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
bool p = unimplemented  {test eax, eax}
bool a = undefined
bool z = eax == 0

if (not(z))
    trap(0xd)

data_cc8b10 = eax
data_cc8b0c = ecx
data_cc8b08 = edx
int32_t entry_ebx
data_cc8b04 = entry_ebx
data_cc8b00 = arg2
data_cc8afc = arg3
int16_t ss
data_cc8b28 = ss
int16_t cs
data_cc8b1c = cs
int16_t ds
data_cc8af8 = ds
int16_t es
data_cc8af4 = es
int16_t fs
data_cc8af0 = fs
int16_t gs
data_cc8aec = gs
bool d
data_cc8b20 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2
data_cc8b14 = arg1
data_cc8b18 = __return_addr
int32_t arg_4
data_cc8b24 = &arg_4
data_cc8a1c = data_cc8b18
data_cc8a10 = 0xc0000409
data_cc8a14 = 1
data_cc8a20 = 1
int32_t var_324_1 = 4
data_cc8a24 = arg_4
___raise_securityfailure(&data_77e898)
noreturn
