#ifndef PET_H
#define PET_H
class Pet
{
public:
	Pet(int Hunger = 0, int Boredom = 0);
	~Pet();

	virtual void Talk();

	void Feed(int food = 4);
	void Play(int fun = 4);

protected:
	const int GetMood()
	{
		return m_bored + m_hunger;
	}
	void PassingTime(int time = 1);
private:
	int m_hunger = 0;
	int m_bored = 0;
};
#endif

