// 函数: _Z16DomSetSaveUpdate9UI2Handle
// 地址: 0xb327d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, DomSetSaveClick)
UI2SetHandler(zx.q(x19), DomSetSaveCommit)
int64_t x8 = sx.q(*(gDomSetSave + 8))

if (x8.d u>= 3)
    pthread_kill(pthread_self(), 6)
    return DomCreateKindomModifiersUpdate(XNoReturn()) __tailcall

UI2SetState(zx.q(x19), (&data_1153c88)[x8], 0xffffffff, 0)
XString::XString()
void var_38

if ((UI2TextboxActive(zx.q(x19), &var_38) & 1) == 0)
    XString::operator=(&var_38)

UI2SetText(zx.q(x19), &data_182e950, &var_38, 0xffffffff)
char var_40

if ((*(gDomSetSave + 0xc) & 0x80000000) == 0)
    GetActiveProfile()
    XString::XString(&var_40)
    
    if ((XString::IsEmpty() & 1) != 0)
        goto label_b328cc
    
    goto label_b328f4

XString::XString(&var_40)

if ((XString::IsEmpty() & 1) == 0)
label_b328f4:
    
    if ((XString::operator==(&var_38) & 1) == 0)
        void* x0_14 = GetActiveProfile()
        
        if (*(x0_14 + 0x7558) s>= 1)
            int64_t i = 0
            void* x20_1 = x0_14 + 0x6f58
            
            do
                if (strcasecmp(XString::operator char const*(), XString::operator char const*())
                        == 0)
                    goto label_b328cc
                
                i += 1
                x20_1 += 0x18
            while (i s< sx.q(*(x0_14 + 0x7558)))
    
    XString::~XString()
else
label_b328cc:
    XString::~XString()
    UI2SetState(zx.q(x19), &data_182e938, 0xffffffff, 0)

return XString::~XString()
