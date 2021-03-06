class Extension
{
public:
	LPRDATA rdPtr;
	LPRH rhPtr;

	Edif::Runtime Runtime;

	static const int MinimumBuild = 251;
	static const int Version = 1;

	static const int OEFLAGS = OEFLAG_NEVERKILL;
	static const int OEPREFS = 0;

	static const int WindowProcPriority = 100;

	Extension(LPRDATA rdPtr, LPEDATA edPtr, fpcob cobPtr);
	~Extension();


	/// Expressions

	const char *BFEncrypt(const char *key, const char *text);

	const char *BFDecrypt(const char *key, const char *hexstring);


	short Handle();
	short Display();

	short Pause();
	short Continue();

	bool Save(HANDLE File);
	bool Load(HANDLE File);

	void Action(int ID, RUNDATA *rd, long param1, long param2);
	long Condition(int ID, RUNDATA *rd, long param1, long param2);
	long Expression(int ID, RUNDATA *rd, long param);
};
