// In the below, L stands for "should be used with left shift", R vice versa
// and E stands for "equal", where no difference is to be made.
// TODO: Introduce a no-shift option: i.e. "this key should never be shifted".
// TODO: Well, ideally, produce some way of blocking wrongly-carried-out keystrokes.
char keys_association_to_hands[] = {
  'E', // # (key 0)
  'R', // 1
  'R', // 2
  'R', // 3
  'R', // 4
  'R', // 5
  'E', // 6
  'L', // 7
  'L', // 8
  'L', // 9
  'L', // 0 (key 10)
  'L', // -
  'L', // =
  'E', // <BckSp>
  'E', // <Tab> (actually backspace)
  'R', // q
  'R', // w
  'R', // e
  'R', // r
  'R', // t
  'E', // y (key 20)
  'L', // u
  'L', // i
  'L', // o
  'L', // p
  'L', // [
  'L', // ]
  'L', // <Enter>
  'L', // <LCtrl> (actually enter)
  'E', // No clue (?)
  'R', // a (key 30)
  'R', // s
  'R', // d
  'R', // f
  'R', // g
  'L', // h
  'L', // j
  'L', // k
  'L', // l
  'L', // ;
  'L', // ' (key 40)
  'R', // <LShft>
  'L', // <backslash>
  'L', // z (actually \ |, above enter)
  'R', // x
  'R', // c
  'R', // v
  'R', // b
  'E', // n
  'L', // m
  'L', // , (key 50)
  'L', // .
  'L', // /
  'L', // <RShft>
  'R', // <CpsLk>
  'R', // <LAlt>
  'E', // <MysteriousKey>
  'E', // <CpsLk> (actually spacebar)
  'R', // <F1>
  'R', // <F2>
  'R', // <F3>
  'R', // <F4>
  'E', // <F5>
  'E', // <F6>
  'E', // <F7>
  'E', // <F8>
  'L', // <F9>
  'L', // <F10>
  'E', // <NumLk>
  'E', // <ScrLk>
  'E', // <KP7>
  'E', // <KP8>
  'E', // <KP9>
  'E', // <KP->
  'E', // <KP4>
  'E', // <KP5>
  'E', // <KP6>
  'E', // <KP+>
  'E', // <KP1>
  'E', // <KP2>
  'E', // <KP3>
  'E', // <KP0>
  'E', // <KP.>
  'E', // Ĉ
  'L', // <F11>
  'L', // <F12>
  'E', // <KPEnt>
  'L', // <RCtrl>
  'E', // <KP/>
  'E', // <PrtSc>
  'L', // <AltGr>
  'E', // <Break>
  'E', // <Home>
  'L', // <Up>
  'L', // <PgUp>
  'L', // <Left>
  'L', // <Right>
  'L', // <End>
  'L', // <Down>
  'L', // <PgDn>
  'L', // <Ins>
  'L', // <Del>
  'E', // <Pause>
  'R', // <LMeta>
  'L', // <RMeta>
  'E' // <Menu>
};
