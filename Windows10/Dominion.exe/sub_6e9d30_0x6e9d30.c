// 函数: sub_6e9d30
// 地址: 0x6e9d30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
void* esi = arg2
char const* const var_1c
int32_t var_18
char const* const var_14
char* eax
char* ecx

if (esi s< 0)
label_6e9df7:
    var_14 = "UITextBox::Utf8StringRightOneIndex"
    var_18 = 0xe5
    var_1c = "C:\x\ax2017\Engine\UITextBox.cpp"
    ecx = "index >= 0 && index < mText.Length()"
else
    eax = *arg1
    
    if (eax == 0 || *eax == 0)
        goto label_6e9df7
    
    eax = sub_63d4e0(arg1)
    
    if (esi s>= *(eax + 8))
        goto label_6e9df7
    
    eax = *arg1
    char* const edi_1 = &data_801800
    
    if (eax != 0)
        edi_1 = eax
    
    void* edi_2 = edi_1 + esi
    arg1.b = *edi_2
    
    if (arg1.b u< 0x80)
    label_6e9daa:
        arg2 = edi_2
        uint32_t eax_1 = sub_5a0d00(&arg2)
        
        if (eax_1 s< 0x80)
            return 1 + esi
        
        if (eax_1 s< 0x800)
            return 2 + esi
        
        void* const eax_4
        eax_4.b = eax_1 s>= 0x10000
        return eax_4 + 3 + esi
    
    eax.b = arg1.b
    eax.b &= 0xe0
    
    if (eax.b == 0xc0)
        goto label_6e9daa
    
    eax.b = arg1.b
    eax.b &= 0xf0
    
    if (eax.b == 0xe0)
        goto label_6e9daa
    
    arg1.b &= 0xf8
    
    if (arg1.b == 0xf0)
        goto label_6e9daa
    
    var_14 = "Xutf8_peek_next"
    var_18 = 0x21c
    var_1c = "C:\x\ax2017\Engine\Xutf8.cpp"
    ecx = "!Xutf8_is_invalid_lead_char(str)"

sub_63b870(eax, &data_801800, ecx, var_1c, var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
