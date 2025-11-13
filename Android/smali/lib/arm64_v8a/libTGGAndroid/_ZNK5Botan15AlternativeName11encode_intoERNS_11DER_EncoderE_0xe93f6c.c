// 函数: _ZNK5Botan15AlternativeName11encode_intoERNS_11DER_EncoderE
// 地址: 0xe93f6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
int64_t x0_1 = Botan::DER_Encoder::start_cons(entry_x1, 0x10)
char var_48 = 0xc
int32_t var_47
__builtin_strncpy(&var_47, "RFC822", 7)
sub_e941b8(x0_1, arg1 + 8, &var_48, 1)
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

var_48 = 6
int32_t var_47_1 = 0x534e44
sub_e941b8(entry_x1, arg1 + 8, &var_48, 2)

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

var_48 = 4
var_47_1.w = 0x4e44
var_47_1:2.b = 0
sub_e941b8(entry_x1, arg1 + 8, &var_48, 4)

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

var_48 = 6
int32_t var_47_2 = 0x495255
sub_e941b8(entry_x1, arg1 + 8, &var_48, 6)

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

var_48 = 4
var_47_2.w = 0x5049
var_47_2:2.b = 0
sub_e941b8(entry_x1, arg1 + 8, &var_48, 7)

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

int64_t* i = *(arg1 + 0x20)

while (i != arg1 + 0x28)
    Botan::DER_Encoder::start_cons(entry_x1, 0)
    (*i[4])(&i[4], entry_x1)
    Botan::DER_Encoder::start_cons(entry_x1, 0)
    (*i[8])(&i[8], entry_x1)
    Botan::DER_Encoder::end_cons()
    Botan::DER_Encoder::end_cons()
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_10 = &i[2]
        int64_t* i_1 = *x8_10
        
        if (*i_1 == i)
            i = i_1
        else
            void* j
            
            do
                j = *x8_10
                x8_10 = j + 0x10
                i = *x8_10
            while (*i != j)
    else
        do
            i = j_1
            j_1 = *j_1
        while (j_1 != 0)

return Botan::DER_Encoder::end_cons()
