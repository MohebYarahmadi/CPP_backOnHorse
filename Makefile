.PHONY: clean All

All:
	@echo "----------Building project:[ can_i_c_now - Debug ]----------"
	@cd "01_AreYouSmarter" && "$(MAKE)" -f  "can_i_c_now.mk"
clean:
	@echo "----------Cleaning project:[ can_i_c_now - Debug ]----------"
	@cd "01_AreYouSmarter" && "$(MAKE)" -f  "can_i_c_now.mk" clean
