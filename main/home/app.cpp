#include <dpp/dpp.h>
#include "./src/client/config.hpp"

const std::string Key = token;

int main() {

     /* Setup the bot */
	    dpp::cluster bot(Key);


	    bot.on_log(dpp::utility::cout_logger());

     /* The event is fired when someone issues your commands */	
 bot.on_slashcommand([](const dpp::slashcommand_t& event) {
	  
	 /*Exemple:   
	 if (event.command.get_command_name() == "ping") {
	            event.reply("Pong!");
	        }
	    });
		*/
	 

	    bot.on_ready([&bot](const dpp::ready_t& event) {
	        if (dpp::run_once<struct register_bot_commands>()) {
				
	            /*Exemple:
				bot.global_command_create(dpp::slashcommand("ping", "Ping pong!", bot.me.id));
				*/
	        }
	    });
	 
	    bot.start(dpp::st_wait);
	}
