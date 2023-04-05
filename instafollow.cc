#include "instafollows.h"
#include "profile.h"

InstaFollows::InstaFollows();

InstaFollows::~InstaFollows();

InstaFollows::InstaFollows(const InstaFollows& other);

void InstaFollows::operator = (const InstaFollows& other);

void InstaFollows::start();

void InstaFollows::advance();

bool InstaFollows::is_item()const{
    return 0;
}

Profile InstaFollows::current()const;

void InstaFollows::remove_current();

void InstaFollows::insert(const Profile& p);

void InstaFollows::attach(const Profile& p);

void InstaFollows::show_all(std::ostream& outs)const;

void InstaFollows::bday_sort();

Profile InstaFollows::find_profile(const std::string& name)const;

bool InstaFollows::is_profile(const Profile& p) const;

void InstaFollows::load(std::istream& ins);

void InstaFollows::save(std::ostream& outs)const;
