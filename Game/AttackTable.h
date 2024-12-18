#pragma once
#include <vector>
#include <string>

//攻撃に関するデータテーブルの要素
class AttackTableItem
{
public:
	AttackTableItem(int, bool, bool, bool);
	~AttackTableItem();
	//ゲッター
	int		GetAttackID()		const	{ return mAttackID; }
	bool	GetIsTrg()			const	{ return mIsTrgButton; }
	bool	GetIsChangeAttack() const	{ return mIsChangeAttack; }
	bool	GetIsColAttack()	const	{ return mIsColAttack; }
protected:
	//攻撃用ID
	int mAttackID;
	//ボタン入力可能か
	bool mIsTrgButton;
	//攻撃情報変更可能か
	bool mIsChangeAttack;
	//攻撃判定可能か
	bool mIsColAttack;
};

//攻撃に関するデータテーブル
class AttackTable
{
public:
	AttackTable();
	~AttackTable();
	void Update();
	void AddItem(AttackTableItem item);
	//ゲッター
	std::vector<AttackTableItem> GetItem()		{ return mItem; }
	std::string GetVoiceName()					{ return mVoiceName; }
	std::string GetSeName()						{ return mSeName; }
	//セッター
	void SetVoiceName(std::string voicename)	{ mVoiceName = voicename; }
	void SetSeName(std::string sename)			{ mSeName = sename; }
protected:
	//テーブルアイテムコンテナ
	std::vector<AttackTableItem> mItem;
	//voice名
	std::string mVoiceName;
	//se名
	std::string mSeName;
};

