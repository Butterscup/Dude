#pragma once
namespace dudeSpace
{
	class dude
	{
	public:
		dude();
		dude(float x, float y, float z);
		~dude();

	private:
		float x;
		float y;
		float z;

	public:
		float getx();
		float gety();
		float getz();
		float distance(dude otherDude);
	};
}
