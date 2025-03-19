

struct Question { 
   int id ; 
   char domain[100] ; 
   char diff[100] ;
   char QST[256] ; 
   char answer[256] ; 
   struct Question* next ; 
    }; 

struct players { 
   int id ; 
   char pseudonym[100] ; 
   char registration_date[100];
   char preferred_domains[100];
   int games_played_nmb ; 
   int total_score ; 
   struct players* next ; 
} ; 

struct Questions_answered { 
   char Questions[256] ; 
   char answer[256] ;
   int score ; 
} ; 


struct games { 
   int player_id ;
   int game_id ;  
   int game_level ;
   struct Question_answered* questions_answered ; 
} ;