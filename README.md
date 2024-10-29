# Re_DivinsSoul
冬季共同制作にて制作したDX ライブラリと C++ 言語で作成した 3D 無双アクションゲームをプログラマー1人で修正、改良したゲーム

# 開発環境
Windows 11  
Visual Studio Community 2022

# 使用ライブラリ
[DX ライブラリ](https://dxlib.xsrv.jp/)
[nlohmann-json](https://github.com/nlohmann/json)

# プロジェクト構成と起動方法
下記 DxLib ディレクトリ内に [DX ライブラリ Windows版 VisualStudio(C++)用](https://dxlib.xsrv.jp/DxLib/DxLib_VC3_24d.zip) を DownLoad して解凍後の ***プロジェクトに追加すべきファイル_VC用*** ディレクトリの内容を全てコピーします。
下記 include ディレクトリ内に[nlohmann](https://github.com/nlohmann/json)をDownLoad して解凍後のnlohmannファイルを全てコピーします。
<pre>
.
├── DxLib(ライブラリ用ディレクトリ)
│
├── AppFrame(自作ゲームフレームワーク用のライブラリ Project)
│   │
│   ├── AppFrame
│   │   │
│   │   └── Application
|   |   |   |
|   |   |   └── ApplicationBase(Dxライブラリやループ処理を行う基底クラスファイル)
|   |   |   |
|   |   |   └── WinMain(ゲーム全体の処理をするソースファイル)
│   │   │
│   │   └── CFile
|   |   |   |
|   |   |   └── CFile(外部ファイルの読み込み、書き込みに関するクラスファイル)
│   │   │
│   │   └── ModeServer
|   |   |   |
|   |   |   └── ModeBase(モードの基底クラスファイル)
|   |   |   |
|   |   |   └── ModeServer(モードの追加、削除などの管理クラスファイル)
│   │   │
│   │   └── Object
|   |   |   |
|   |   |   └── ObjectBase(ゲーム内の物体の基底クラスファイル)
│   │   │
│   │   └── Reference
|   |   |   |
|   |   |   └── ColorFormat(RGBの色フォーマットに関するヘッダーファイル※)
|   |   |   |
|   |   |   └── MyCollision(当たり判定に関するクラスファイル※)
|   |   |   |
|   |   |   └── MyDraw(2Dでの矩形描画クラスファイル)
|   |   |   |
|   |   |   └── MyMath(イージング、デグリーラジアンの変換などを行うクラスファイル)
|   |   |   |
|   |   |   └── MyStruct(自作構造体をまとめるクラスファイル)
│   │   │
│   │   └── ResourceServer
|   |   |   |
|   |   |   └──ResourceServer(リソース管理のクラスファイル※)
│   │   │
│   │   └── System
|   |       |
|   |       └── XPad
|   |       |   |
|   |       |   └── GameXPad(Xinputの処理クラスファイル)
|   |       |
|   |       └── GamePad(DirectInputの処理クラスファイル)
│   │   
│   ├── appframe.h(ヘッダーファイル)
│   │
│   ├── UtilMacro.h(ヘッダーファイル)
│   │
│   └── AppFrame.sln(Game.sln の方を起動して下さい)
│
└── Game(ゲーム本体の Project)
│   │
│   ├── Game
│   │   │
│   │   └── Actioncollision(当たり判定後の押し戻し、攻撃判定などの処理をまとめたクラスファイル)
│   │   │
│   │   └── ApplicationGlobal(ApplicationMainに実態を持つグローバルな関数をまとめるクラスファイル)
│   │   │
│   │   └── ApplicationMain(ApplicationBaseの派生。ゲームループを処理するクラスファイル)
│   │   │
│   │   └── AttackTable(攻撃情報のデータテーブル取得クラスファイル)
│   │   │
│   │   └── AttackTableItem(攻撃情報の各変数の設定クラスファイル)
│   │   │
│   │   └── AttackTableManager(攻撃情報を管理するクラスファイル)
│   │   │
│   │   └── Camera(カメラ制御を行うクラスファイル)
│   │   │
│   │   └── divine(ゲーム内スキルDivineの処理クラスファイル)
│   │   │
│   │   └── Effect(エフェクトの発生から終了までの処理のクラスファイル)
│   │   │
│   │   └── EN_Crab(Enemyクラスの派生で、カブトガニのような敵の処理をまとめたクラスファイル)
│   │   │
│   │   └── EN_Osero(Enemyクラスの派生で、人型の敵の処理をまとめたクラスファイル)
│   │   │
│   │   └── EN_Romanoff(Enemyクラスの派生で、ボスの処理をまとめたクラスファイル)
│   │   │
│   │   └── Enemy(ObjectBaseの派生で敵に関するObjectの基底クラスファイル)
│   │   │
│   │   └── EnemyManager(敵の出現、削除など敵を管理するクラスファイル)
│   │   │
│   │   └── EnumInfo(スキルなどで使うEnumをまとめたヘッダー)
│   │   │
│   │   └── GameEvent(ゲーム内の進行イベントを制御するクラスファイル)
│   │   │
│   │   └── GameSystem(ゲーム内システムに関する制御クラスファイル)
│   │   │
│   │   └── gameui(ゲーム内UIを制御、描画するクラスファイル)
│   │   │
│   │   └── JsonUtility(Jsonをこのプロジェクト内でも扱えるようにするクラスファイル※)
│   │   │
│   │   └── MapEntity(ソースファイル)(ゲーム内マップの背景を描画するためのクラスファイル)
│   │   │
│   │   └── Game.sln(こちらを起動して下さい)
│
└── include(nlohmann-jsonのインクルードファイル)
  
　※がついているファイルは元のDivinsSoulから流用しているため、チーム内の別のプログラマーが作成したファイル
  
</pre>

# AppFrame フレームワーク概要
ゲームを作成する上で定形的に必要となる機能をまとめたフレームワーク  
Static Library の形式で提供(Project 設定)

### ApplicationBase
DX ライブラリを用いた Windows アプリケーションを作成する基底クラス  
本クラスを継承したクラスを作成すれば最小のコードでアプリのメイン部分を記述出来る

### ModeBase / ModeServer
本フレームワークはモードと呼ぶ単位でプログラミング可能になっており、モードを切り替える機能も提供します。  
これによりアプリ作成者は、モード単位の実装をする事でゲームのフローを構築出来ます。  

ModeBase を継承したクラス単位でタイトルやインゲーム、設定画面など好きな単位で構築でき  
ModeServer が各モードを切り替える機能を提供します。

